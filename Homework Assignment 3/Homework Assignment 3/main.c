//
//  main.c
//  Homework Assignment 3
//
//  Created by Abir Faisal on 1/29/15.
//  Copyright (c) 2015 Abir Faisal. All rights reserved.
/*
 In English, the most commonly used letters are e, t, a, o, i, n, s in that order.
 
 Ask the user to input a string that is less than 1000 characters in length.
 
 Go through the string and calculate the frequency of each letter above (e, t, a, o, i, n, s) that was entered.
 
 Frequency would be total count of the letter / number of characters in the string.
 
 Number of characters entered does not necessarily equal 1000.
 
 It is recommended to use an array to store this frequency.
 
 Also note, case should not matter.  ‘a’ and ‘A’ are equivalent.
 
 Output the frequency of each letter calculated.
 */


#include <stdio.h>
#include <ctype.h>

int main() {
	
	const int INPUT_SIZE = 2048;
	char input[INPUT_SIZE];
	
		//Prompt User
	printf("Enter a string less than 1000 characters in length: \n");
	scanf("%s", input);
	
	
		//Make everything uppercase because in the ASCII Table 'a' and 'A' are different values
	for (int i = 0; input[i]; i++) {
		input[i] = toupper(input[i]);
	}
	
	
	const int FREQUENCY_SIZE = 127;
	int frequency[FREQUENCY_SIZE]; //Compiler will automatically initalize all elements to 0

	int currentInputElement = 0;
	int currentFrequencyElement = 0;
	
	for (int i = 0; i < INPUT_SIZE; i++) {
		
			// go through all frequency elements and test
		
		for (int i = 0; i < FREQUENCY_SIZE; i++) {
			if (input[currentInputElement] == currentFrequencyElement) {
				
				frequency[currentFrequencyElement] = frequency[currentFrequencyElement] + 1;
			
				currentFrequencyElement = currentFrequencyElement + 1;
			}
		}
		
			//test next element
			currentInputElement = currentInputElement + 1;
	}
	
	
	
	for (int i = 0; i < FREQUENCY_SIZE; i++) {
		if (frequency[i] ) {
		printf("%i", (int)frequency[i]);
		}
	}
	
	
	return 0;
}
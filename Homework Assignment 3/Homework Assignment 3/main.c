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
	
	char input[2048];
	
	
		//Prompt User
	printf("Enter a string less than 1000 characters in length: \n");
	scanf("%s", input);
	
	
		//Make everything uppercase because C defines that 'a' and 'A' are different characters
	for (int i = 0; input[i]; i++) {
		input[i] = tolower(input[i]);
	}
	
	printf("%s \n", input); //Remove test
	
	
	
	return 0;
}

//
//  main.c
//  Homework Assignment 4
//
//  Created by Abir Faisal on 3/3/15.
//  Copyright (c) 2015 Abir Faisal. All rights reserved.
//

	/////////////////
	// Assignment: //
	/////////////////
/*
 Review using random functions (srand and rand) in C.
 
 Create a function that takes in the following:
	- Health – Double
 	- Armor – Double from 0 to 1.
	- Minimum Damage – Unsigned integer.
	- Maximum Damage – Unsigned integer.

 The function calculates how much damage is dealt to the player.
	- Use the random functions to pick a random number between the minimum and maximum damage.
	- Multiply the damage by (1-Armor) and subtract the new value from health.
	- Output the new health value, how much damage was dealt (double), and a 1 if the player is still alive (health > 0) or 0 if not.
 
 Allow the user to enter the health value, armor value, min damage, and max damage to be used in your function.
 	- Run a simulation that calls the function until the player’s health drops below 0.
	- Every time the function is called, output the results it produces.
 
 HINT: You want to call srand in your main function ONCE.
 Then call rand() in your new function.
 
 HINT: Your new function will pass some of the variables by reference so that it can also output them.
 
 HINT: In Unit 1->Week 3->Section 2 there was a problem to solve using random numbers.  Go back and review how this works.
 
 You will need to use modulus operators and addition to constrain the number returned by rand() to [min damage, max damage].
 */

	//make bool type because lazy
typedef int bool;
#define true 1
#define false 0



#include <stdio.h>
#include "hw4Functions.h"

int main(int argc, const char * argv[]) {
	
		//random seed srand
	
	

		//Current player's health as both input into the function and output (has damage subtracted from it).
	double health;
	
		//Armor modifier input into the function.
	double armor;
	
	int minDamage;
	
	int maxDamage;
	
	double actualDamage;
	
	bool alive = true;
	
	
		//get input
	
	
		//while player is alive
	while (alive) {

	
		printf("Player health");
		
		if (3 == 4) {
			
		}
	
	}
	
	
		//if not alive
	if (!alive) {
		printf("Player health");
	}
	
	
	
	
	
	
	
	
	
	
	
	
}

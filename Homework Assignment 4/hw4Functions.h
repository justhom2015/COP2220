//
//  hw4Functions.h
//  Homework Assignment 4
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
 
 
 
 
 
 void calculateDamage(double *pHealth, double armor, int minDamage, int maxDamage, double *pActualDamage, int *pAlive);
 
 This function has the following parameters:
 
 pHealth - Current player's health as both input into the function and output (has damage subtracted from it).
 armor - Armor modifier input into the function.
 minDamage - Minimum damage input into the function.
 maxDamage - Maximum damage input into the function.
 pActualDamage - Actual damage calculated and output from the function.  This should be a random variable between minDamage and maxDamage multiplied by (1 - armor).
 pAlive - Alive variable output from the function.  Should be 1 if the player's health is above 0, or 0 if the player's health is below 0.
 
 */

#ifndef Homework_Assignment_4_hw4Functions_h
#define Homework_Assignment_4_hw4Functions_h


#endif


typedef int bool;
#define true 1
#define false 0


void getDamage(double *health, double armor, double minDamage, double maxDamage, double *damage, bool *alive){
	
	
	
	
}



void health(){
	
}


void armor(){
	
}

void minDamage(){
	
}

void maxDamage(){
	
}

void damage(){
	
}

void alive(){
	
}


































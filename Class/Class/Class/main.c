//
//  main.c
//  Class
//
//  Created by Abir Faisal on 1/22/15.
//  Copyright (c) 2015 Abir Faisal. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
	double taxrate;
	printf("enter tax rate: ");
	scanf("%lf", &taxrate);
	printf("The tax rate is %lf \n", taxrate);
    return 0;
}
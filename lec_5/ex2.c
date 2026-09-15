/*
 *  Write a C program to convert Fahrenheit to Celsius.
 *  C  = (F-32)*5/9
 */ 

/* preprocessor directives */
#include <stdio.h>
#define F2C 0.555555556f

int main(){
	/* declare two variables for input and output */
	float input, output;

	/* prompt user to enter a value in F for conversion */
	printf("Input a Fahrenheit value\n");

	/* call scanf to get user input */
	scanf("%f", &input);

	/* calculate output value */
	output = (input - 32) * F2C;

	/* print the result */
	printf("%fF == %fC\n", input, output);

	/* return out */
	return output;
}


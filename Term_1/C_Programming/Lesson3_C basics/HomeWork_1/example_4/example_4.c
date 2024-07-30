/*
==============================================================================================================
	@file: example_4.c
	@author: Mohammed Tarabay
	@abstract: Prints product of two numbers entered by user in console
==============================================================================================================
*/

#include <stdio.h>

int main(){
	float num1, num2;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f%f", &num1, &num2); //inputs two numbers from user
	fflush(stdin);fflush(stdin);
	printf("product: %f", num1 * num2); //prints the product of the two numbers

	return 0;
}

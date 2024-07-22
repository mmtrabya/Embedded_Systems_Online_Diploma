/*
==============================================================================================================
	@file: example_6.c
	@author: Mohammed Tarabay
	@abstract: swap numbers entered by user
==============================================================================================================
 */

#include <stdio.h>
int main(){
	float a, b, temp;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	fflush(stdin);
	temp = a;    // Value of a is stored in variable temp
	a = b;       // Value of b is stored in variable a
	b = temp;    // Value of temp(which contains initial value of a) is stored in variable b
	printf("\nAfter swapping, value of a = %f\n", a);
	fflush(stdout);
	printf("After swapping, value of b = %f", b);
	fflush(stdout);
	return 0;
}

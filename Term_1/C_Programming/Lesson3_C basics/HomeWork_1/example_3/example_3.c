/*
==============================================================================================================
	@file: example_3.c
	@author: Mohammed Tarabay
	@abstract: Prints sum of two integers entered by user in console
==============================================================================================================
*/

#include <stdio.h>

int main(){
	int num_1, num_2;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d%d", &num_1, &num_2); //inputs two numbers from user
	fflush(stdin);fflush(stdin);
	printf("sum: %d", num_1 + num_2); //prints the sum of the two numbers

	return 0;
}

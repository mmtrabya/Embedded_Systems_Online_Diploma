/*
==============================================================================================================
	@file: example_2.c
	@author: Mohammed Tarabay
	@abstract: Prints an integer entered by user in console
==============================================================================================================
*/


#include <stdio.h>

int main(){
	int num;
	printf("enter an integer: ");
	fflush(stdout);
	scanf("%d", &num); // inputs the number from user
	fflush(stdin);
	printf("you entered: %d", num); //prints the number

	return 0;
}

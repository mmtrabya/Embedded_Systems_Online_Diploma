/*
==============================================================================================================
	@file: Example_1.c
	@author: Mohammed Tarabay
	@abstract: Checks if Number input by user is even or odd
==============================================================================================================
*/

#include <stdio.h>

int main(){
	int number;
	printf("Enter an Integer that you want to check: ");
	fflush(stdout);
	scanf("%d", &number);
	fflush(stdin);
	if(number % 2 == 0){
		printf("%d is even", number);
		fflush(stdout);
	}
	else{
		printf("%d is odd", number);
		fflush(stdout);
	}
	return 0;
}

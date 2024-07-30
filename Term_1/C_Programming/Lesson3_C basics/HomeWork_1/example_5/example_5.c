/*
==============================================================================================================
	@file: example_5.c
	@author: Mohammed Tarabay
	@abstract: Prints the ASCII value of the character entered by user in console
==============================================================================================================
 */

#include <stdio.h>

int main() {
	char letter;

	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &letter);
	fflush(stdin);
	printf("ASCII value of %c = %d\n", letter, letter); // Print the ASCII value of the character
	fflush(stdout);
	return 0;
}

/*
==============================================================================================================
	@file: Example_5.c
	@author: Mohammed Tarabay
	@abstract: Checks if Character input by user is Alphabet or Not
==============================================================================================================
*/


#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    // Prompt user for input
    printf("Enter a character: ");
    fflush(stdout);
    scanf("%c", &c);
    fflush(stdin);

    // Check if the character is an alphabet
    if (isalpha(c)) {
        printf("%c is an alphabet.\n", c);
        fflush(stdout);
    } else {
        printf("%c is not an alphabet.\n", c);
        fflush(stdout);
    }

    return 0;
}

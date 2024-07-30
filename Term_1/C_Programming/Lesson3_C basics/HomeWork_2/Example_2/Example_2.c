/*
==============================================================================================================
	@file: Example_2.c
	@author: Mohammed Tarabay
	@abstract: Checks if Letter input by user is vowel or not
==============================================================================================================
*/

#include <stdio.h>

int main() {
    char c;
    int isVowel = 0;

    // Prompt user for input
    printf("Enter a letter: ");
    fflush(stdout);
    scanf("%c", &c);
    fflush(stdin);

    // Check if the letter is a vowel
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c== 'A' || c== 'E' || c== 'I' || c== 'O' || c== 'U') {
        isVowel = 1;
    }

    // Print the result
    if (isVowel) {
        printf("%c is a vowel.\n", c);
        fflush(stdout);
    } else {
        printf("%c is not a vowel.\n", c);
        fflush(stdout);
    }

    return 0;
}

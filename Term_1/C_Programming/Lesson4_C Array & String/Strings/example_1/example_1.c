/*
==============================================================================================================
	@file: example_1.c
	@author: Mohammed Tarabay
	@abstract: Finding frequency of a letter in a string
==============================================================================================================
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0;

    // Input string from user
    printf("Enter a string: ");
    fflush(stdout);
    scanf("%[^\n]%*c", str); // Reads a line of input including spaces
    fflush(stdin);

    // Input character to find frequency
    printf("Enter a character to find frequency: ");
    fflush(stdout);
    scanf("%c", &ch);
    fflush(stdin);

    // Count occurrences of the character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Display result
    printf("Frequency of '%c' = %d\n", ch, count);
    fflush(stdout);

    return 0;
}


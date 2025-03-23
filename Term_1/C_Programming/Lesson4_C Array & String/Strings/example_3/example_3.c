/*
==============================================================================================================
	@file: example_3.c
	@author: Mohammed Tarabay
	@abstract: Reverse a String Without Using Library Function
==============================================================================================================
*/

#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int length = 0, i;

    // Input string
    printf("Enter the string: ");
    fflush(stdout);
    scanf("%[^\n]%*c", str);  // Reads the entire line including spaces
    fflush(stdin);

    // Calculate length manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[i] = '\0';  // Null-terminate the reversed string

    // Output result
    printf("Reverse string is: %s\n", reversed);
    fflush(stdout);

    return 0;
}


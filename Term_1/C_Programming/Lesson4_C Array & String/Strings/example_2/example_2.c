/*
==============================================================================================================
	@file: example_2.c
	@author: Mohammed Tarabay
	@abstract: Find the Length of a String (Without strlen())
==============================================================================================================
*/

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Input string
    printf("Enter a string: ");
    fflush(stdout);
    scanf("%[^\n]%*c", str);  // Reads the entire line including spaces
    fflush(stdin);

    // Calculate length manually
    while (str[length] != '\0') {
        length++;
    }

    // Output result
    printf("Length of string: %d\n", length);
    fflush(stdout);

    return 0;
}


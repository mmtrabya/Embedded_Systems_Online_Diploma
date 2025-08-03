/*
==============================================================================================================
	@file: main.c
	@author: Mohammed Tarabay
	@abstract: Reverse a Sentence Using Recursion
==============================================================================================================
*/


#include <stdio.h>

void reverseSentence() {
    char c;
    if (scanf("%c", &c) && c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}

int main() {
    printf("Enter a sentence: ");
    fflush(stdout);  // Ensure prompt is displayed
    fflush(stdin);   // Clear input buffer for Eclipse
    reverseSentence();
    printf("\n");    // Add newline after reversed output
    return 0;
}

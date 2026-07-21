#include <stdio.h>

int main() {
    char ch;

    // Accept a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Display the character and its ASCII value
    printf("ASCII Value=%d\n", ch);

    return 0;
}
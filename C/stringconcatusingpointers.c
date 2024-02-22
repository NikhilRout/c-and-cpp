#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[50]; // First string
    char str2[50]; // Second string

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Find the end of the first string using pointer arithmetic
    char *ptr = str1;
    while (*ptr != '\0') {
        ptr++;
    }

    // Concatenate the second string to the end of the first string using pointers
    char *ptr2 = str2;
    while (*ptr2 != '\0') {
        *ptr = *ptr2;
        ptr++;
        ptr2++;
    }
    *ptr = '\0'; // Append null terminator at the end

    printf("Concatenated string: %s", str1);

    return 0;
}

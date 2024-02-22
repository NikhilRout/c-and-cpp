#include <stdio.h>

int main() {
    char str[] = "hello";
    int num = 9;

    // Determine the length needed for the concatenated string
    int length = snprintf(NULL, 0, "%s%d", str, num);
    
    // Create a character array to store the concatenated string
    char concatenated[length + 1]; // +1 for null terminator
    
    // Use sprintf to concatenate the string and integer into concatenated array
    sprintf(concatenated, "%s%d", str, num);

    // Display the concatenated string
    printf("Concatenated string: %s\n", concatenated);

    return 0;
}

#include <stdio.h>
#include <string.h>

#define ASCII_RANGE 128

int main() {
    char input[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", input);

    int frequency[ASCII_RANGE] = {0};  // Initialize all frequencies to 0

    // Calculate character frequencies
    for (int i = 0; input[i] != '\0'; i++) {
        frequency[(int)input[i]]++;
    }

    // Print character frequencies
    printf("Character frequencies:\n");
    for (int i = 0; i < ASCII_RANGE; i++) {
        if (frequency[i] > 0) {
            printf("'%c' (%d): %d\n", i, i, frequency[i]);
        }
    }

    return 0;
}
/*
char str[100];
printf("Enter a string");
scanf("%[^\n]", str);

while(str[len] != '\0'){
    len++;
}

for(int i = 0; i != '\0'; i++){
    len++;
}*/

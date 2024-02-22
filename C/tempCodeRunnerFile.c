#include <stdio.h>
#include <string.h>

int main()
{
    int numbers[10] = {48,49,50,51,52,53,54,55,56,57};
    int count[10] = {0,0,0,0,0,0,0,0,0,0};
    char str[100];
    printf("Enter string to be checked: ");
    scanf("%s",str);

    for(int i =0; i<strlen(str);i++){
        char k = str[i];
        for(int i = 0; i<10;i++){
            if(k == numbers[i]){
                count[i]++;
            }
        }
    }
    for(int i = 0; i<10; i++){
        printf("%d", count[i]);
        printf(" ");
    }
    
    return 0;
}
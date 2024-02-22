#include <stdio.h>
#include <string.h>

int main()
{
    char s[100],t[100];
    int len = 0;
    printf("Enter first string: ");
    scanf("%[^\n]s",s);
    printf("Enter second string: ");
    scanf("%[^\n]s",t);
    printf("length of first string: ");
    while(s[len]!='\0'){
        len++;
    }
    printf("%d\n", len);
    printf("reversed string: ");
    for(int i = len; i>=0;i--){
        printf("%c",s[i]);
    }   
        
    return 0;
}
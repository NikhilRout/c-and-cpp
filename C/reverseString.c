#include <stdio.h>

int main(){   
    char s[100];
    int len;
    scanf("%s",s);
    len = strlen(s);
    
    for(int j = len-1; j>=0;j--){
        printf("%c",s[j]);
    }
    return 0;
}
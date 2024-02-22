#include <stdio.h>
#include <string.h>

int checkPattern(char s1[], char s2[]);

int main(){
    char s1[100];
    char s2[100];
    scanf("%s%s",s1,s2);
    printf("%d",checkPattern(s1,s2));
    
    return 0;
}

int checkPattern(char s1[], char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int count =0,a=0,b=0,k;
    
    for(int i = 0; i<len1;i++){
        for (int i=0;i<len2;i++) {
            if (s2[i] == s1[a+i]) {
                count++;
            }
        }
        a++;
    }
    
    if (count == len2) {
        k=1;
    }
    else {
        k=0;
    }
    return k;
}
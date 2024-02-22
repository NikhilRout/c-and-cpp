#include <stdio.h>
#include <string.h>

int checkPattern(char s1[], char s2[]);

int main()
{
    char s1[1000];
    char s2[1000];
    
    scanf("%s%s",s1,s2);
    
    printf("%d",checkPattern(s1,s2));
    
    return 0;
}
int checkPattern(char s1[], char s2[]) {
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    int count =0,a=0,b=0,k;
    
    while (b<=l1) {
        for (int i=0;i<l2;i++) {
            if (s2[i] == s1[a+i]) {
                count++;
            }
        }
        b++;
        a++;
    }
    
    if (count == l2) {
        k=1;
    }
    else {
        k=0;
    }
    return k;
}
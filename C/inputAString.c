#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    scanf("%s",s);
    printf("%s",s);
    printf("\n%d",strlen(s));
    printf("\n%s",strrev(s));
    //printf("\n%s",strcmp())
    return 0;
}
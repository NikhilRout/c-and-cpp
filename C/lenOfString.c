#include <stdio.h>

int main()
{
    char s[10];
    scanf("%s",s);
    for(int i = 0; i<10;i++)
    {
        if(s[i]=='\0')
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
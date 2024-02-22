#include <stdio.h>

int main()
{
    int n,g = 0, arr[] = {1,2,3,2,5};
    scanf("%d",&n);
    for(int i = 0; i< 4;i++)
    {
        if(n == arr[i])
        {
            g++;
        }
    }
    printf("%d",g);
    return 0;
}
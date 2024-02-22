#include <stdio.h>

void swapp(int*,int*);

int main()
{
    int a = 10, b = 15;
    swapp(&a,&b);
    printf("%d %d", a, b);
    return 0;
}

void swapp(int *a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
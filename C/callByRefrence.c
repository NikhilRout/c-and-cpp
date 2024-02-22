#include <stdio.h>
void swap(int*a,int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\nInside Function");
    printf("\nValue of a: %d, a");
    printf("\nValue of b: %d, b");
}
void main(){
    int a = 2, b=3;
    swap(&a,&b);
    printf("\nInside main");
    printf("\nValue of a: %d, a");
    printf("\nValue of b: %d, b");
}
#include <stdio.h>
float square(float);
void main(){
    float m,n;
    printf("\nEnter some number\n");
    scanf("%f",&m);
    n = square(m);
    printf("Square of the given number %f is %f",m,n);
}
float square(float x){
    float p;
    p = x*x;
    return p;
}
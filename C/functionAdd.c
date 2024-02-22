#include <stdio.h>

int add(int a, int b);

int main(){
    int sum,a,b;
    printf("Enter the inputs: \n");
    scanf("%d%d",&a,&b);
    sum = add(a,b);
    printf("Sum: %d",sum);
}

int add(int a, int b){
    return a+b;
}
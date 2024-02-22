#include <stdio.h>
int sumOfDigit(int);

int main()
{   
    int* ptr = (int*)malloc(5*(sizeof(int)));
    printf("%d",sumOfDigit(12374));
    return 0;
}

int sumOfDigit(int num){
    static int sum = 0;
    sum+= (num%10);
    if(num/10 !=0){
    sumOfDigit(num/10);
    }
    return sum;
}

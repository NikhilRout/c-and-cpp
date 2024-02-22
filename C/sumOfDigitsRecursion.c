#include <stdio.h>
int sumOfDigit(int);

int main()
{
    printf("%d",sumOfDigit(1234));
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

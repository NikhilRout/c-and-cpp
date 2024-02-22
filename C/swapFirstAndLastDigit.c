#include <stdio.h>
#include <math.h>

int main()
{
    int num,initial_num,new_num,digits=0,power,last,mid,x,first;
    printf("Enter number whose first and last digit is to be swapped: ");
    scanf("%d",&num);
    initial_num = num;
    last = num % 10;
    while(num>0){
        num/=10;
        digits += 1;
    }
    power = digits -1;
    first = (initial_num/pow(10,power));
    x = first*(pow(10,power));
    mid = (initial_num%x)/10;
    new_num = last*(pow(10,power)) + (mid*10) + first;
    printf("Swapped number: %d",new_num);

    return 0;
}
#include <stdio.h>

int main()
{
    int num,rem,new_num=0;
    printf("Input number to be checked for palindrome: ");
    scanf("%d",&num);
    int initial_num = num;
    while(num>0){
        rem = num%10;
        new_num = (new_num*10)+rem;
        num/=10;
    }
    printf("%d",new_num);
    if(initial_num==new_num){
        printf("\nit is a palindrome");
    }else{
        printf("\nnot a palindrome");
    }

    return 0;
}

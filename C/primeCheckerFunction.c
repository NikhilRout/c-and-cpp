#include <stdio.h>
int primeChecker(int a);
int main(){
    int num;
    scanf("%d",&num);
    if(primeChecker(num) == 0){
        printf("not prime");
    }else{
        printf("prime");
    }
    return 0;
}
int primeChecker(int a){
    int flag = 0;
    for(int i = 2; i< a/2;i++){
        if(a%i == 0){
            flag ++;
        }
    }
    if(flag>0){
        return 0;
    }
}
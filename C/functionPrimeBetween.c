#include <stdio.h>

int prime(int);

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = a; i<b; i++){
        if(prime(i))
            printf("%d", i);
    }
}

int prime(int n){
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
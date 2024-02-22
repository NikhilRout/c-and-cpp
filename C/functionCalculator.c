#include <stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);

int main(){
    int a,b,choice;
    printf("Enter numbers:\n");
    scanf("%d%d",&a,&b);
    printf("choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("%d",add(a,b));
            break;
        case 2:
            printf("%d",sub(a,b));
            break;
        case 3:
            printf("%d",mul(a,b));
            break;
        case 4:
            printf("%d",div(a,b));
            break;
    }

}

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
float div(int a, int b){
    return a/b;
}
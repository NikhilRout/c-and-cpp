#include <stdio.h>

struct complex{
    float real;
    float imaginary;
};

void add(struct complex, struct complex);
void sub(struct complex, struct complex);
void mul(struct complex, struct complex);

int main(){
    struct complex n1,n2;

    printf("Enter numbers:");
    scanf("%f %f",&n1.real,&n1.imaginary);
    scanf("%f %f",&n2.real,&n2.imaginary);

    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1:
            add(n1,n2);
            break;
        case 2:
            sub(n1,n2);
            break;
        case 3:
            mul(n1,n2);
            break;
        default:
            printf("invalid");
    }

    return 0;
}

void add(struct complex n1, struct complex n2){
    struct complex c;
    c.real = n1.real + n2.real;
    c.imaginary = n1.imaginary + n2.imaginary;
    printf("%.2f + %.2f i",c.real,c.imaginary);
}
void sub(struct complex n1, struct complex n2) {
    struct complex c;
    c.real = n1.real - n2.real;
    c.imaginary = n1.imaginary - n2.imaginary;
    if (c.imaginary < 0) {
        printf("%.2f  %.2f i",c.real,c.imaginary);
    }
    else {
        printf("%.2f + %.2f i",c.real,c.imaginary);
    }
}
void mul(struct complex n1, struct complex n2) {
    struct complex c;
    c.real = n1.real*n2.real - n1.imaginary*n2.imaginary;
    c.imaginary = n1.real*n2.imaginary + n1.imaginary*n2.real;
    if (c.imaginary < 0) {
        printf("%.2f  %.2f i",c.real,c.imaginary);
    }
    else {
        printf("%.2f + %.2f i",c.real,c.imaginary);
    }
}
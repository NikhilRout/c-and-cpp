#include <stdio.h>

struct student {
    char name[30];
    int age;
    char registration[1000];
};

struct student input(std); // Declare the input function with a pointer parameter

int main() {
    struct student std;
    input(&std); // Pass the address of std to the input function
    return 0;
}

struct student  input(std) {
    scanf("%s", std->name); // Use -> to access the struct members when using a pointer
}

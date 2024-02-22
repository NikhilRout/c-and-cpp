#include <iostream>

// Function that increments a number using a pointer
void incrementByPointer(int *ptr) {
    (*ptr)++;
}

int main() {
    int value = 10;

    std::cout << "Before increment: " << value << std::endl;

    // Pass the address of 'value' to the function
    incrementByPointer(&value);

    std::cout << "After increment: " << value << std::endl;

    return 0;
}

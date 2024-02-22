#include <iostream>

int main() {
    float total = 100;
    float &sum = total;

    std::cout << "Value of sum: " << &total << std::endl;

    return 0;
}

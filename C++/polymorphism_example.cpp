#include <iostream>

class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    Shape *shape1 = new Circle();
    Shape *shape2 = new Square();

    shape1->draw(); // Calls Circle's draw method
    shape2->draw(); // Calls Square's draw method

    delete shape1;
    delete shape2;

    return 0;
}

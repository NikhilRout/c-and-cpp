/*#include <iostream>

class MyClass {
public:
    int value;

    // Constructor
    MyClass(int v) : value(v) {}
};

void modifyByValue(MyClass &obj) {
    obj.value = 20; // Modifying the copied object
    std::cout << "Inside function: " << obj.value << std::endl;
}

int main() {
    MyClass obj(10);

    std::cout << "Before function call: " << obj.value << std::endl;

    modifyByValue(obj);

    std::cout << "After function call: " << obj.value << std::endl;

    return 0;
}

*/


///*
//PASSING BY POINTER REF

#include <iostream>
class cls{
    public:
        int val;
        cls() : val(10) {}
        cls(int v) : val(v){}
};
void modVal(cls *ptr){
    (ptr->val)+=10;
}
int main(){
    //cls c(15);
    //modVal(&c);
    cls* c = new cls(5);
    modVal(c);
    std :: cout<< c->val;
    delete c;
}

//*/
#include <iostream>

class B;
class A{
    private:
        int a;
        friend class B;
    public:
        A(){
            a = 10;
        }
};
class B{
    private:
        int b;
    public:
        B(){
            b = 12;
        }
        int add(){
            A objA;
            return objA.a + b;
        }
};

int main(){
    B objB;
    std :: cout<<"Sum: "<<objB.add();

    return 0;
}
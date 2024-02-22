#include <iostream>
using namespace std;

class cls{
    public:
        int a;
        cls(int a): a(a){}
        void display(){
            cout<<a+10<<endl;
        }
};

int main(){

    cls* ptr = new cls(5);
    cout<<ptr->a<<endl;
    ptr->display();
    delete ptr;

    /*int* ptr = new int[5];
    delete[] ptr;*/
    return 0;
}

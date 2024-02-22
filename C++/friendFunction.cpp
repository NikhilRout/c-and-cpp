///*
#include <iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        A(int a){
            this->a = a;
        }
        friend void friendFunction( class A, class B);
};
class B{
    private:
        int b;
    public:
        B(int b): b(b){}
        friend void friendFunction(A, B);
};

void friendFunction(A aobj, B bobj){
    cout<<(aobj.a + bobj.b);
}

int main(){
    A a(10);
    B b(2);
    friendFunction(a, b);

    return 0;
}
//*/

/*
#include <iostream>
using namespace std;

class B; // Forward declaration of class B is needed for friend declaration in class A

class A {
private:
    int a;

public:
    A(int a) : a(a) {}

    friend void friendFunction(A &aobj, B &bobj);
};

class B {
private:
    int b;

public:
    B(int b) : b(b) {}

    friend void friendFunction(A &aobj, B &bobj);
};

void friendFunction(A &aobj, B &bobj) {
    cout << (aobj.a + bobj.b) << endl;
}

int main() {
    A a(10);
    B b(20);
    friendFunction(a, b);

    return 0;
}
*/
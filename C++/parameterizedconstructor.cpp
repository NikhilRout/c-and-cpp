#include <iostream>
#include<string.h>
using namespace std;

class Person{
    protected:
        int age;
        string name;
    public:
        void setVal(){
            cin>>age;
            cin>>name;
        }
        void disp(){
            cout<<age<<'\t'<<name;
        }
};

class Employee : public Person{
    private:
        int eid;
    public:
        void setVal(){
            Person::setVal();
            cin>>eid;
        }
        void display(){
            Person::disp();
            cout<<eid<<endl;
        }
};

int main(){
    Employee e;
    e.setVal();
    e.display();
    
    return 0;
}
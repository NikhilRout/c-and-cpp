#include <iostream>
using namespace std;
class person{
    protected:
        char name[50];
    public:
        void getdata(){
            cout<<"Enter name:";
            cin>>name;
        }
        void display(){
            cout<<"Name:"<<name<<endl;
        }
};

class employee: public person{
    protected:
        int eid;
        char designation[30];
    public:
        void getinfo();
        void dis();
};

void employee::getinfo(){
    person::getdata();
    cout <<"Enter eid and designation";
    cin>>eid>>designation;
}

void employee :: dis(){
    person::display();
    cout<<"Eid = "<<eid<<endl;
    cout<<"Designation = "<<designation<<endl;
}

main(){
    employee e;
    e.getinfo();
    e.dis();
}
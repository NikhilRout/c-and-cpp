#include <iostream>
using namespace std;

class student{
   char name[10];
   int id;
   char school[10];

   public:
    void getdata();
    void putdata();
};

void student::getdata(){
    char a[10];
    int b;
    char c[10];
    cin>>a;
    cin>>b;
    cin>>c;
}

void student::putdata(){
    student s1;
    cout<<s1.name;
    cout<<s1.id;
    cout<<s1.school;
}
int main(){
    student s[10];
    for(int i = 0;i <3;i++){
        s[i].getdata();
    }
    return 0;
}
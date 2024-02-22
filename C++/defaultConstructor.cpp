#include <iostream>
using namespace std;

class student{
    private:
        int rollno;
        float marks;
    public:
        student(){
            rollno = 0; marks = 0.0;}
        void display()
        {
            cout<<rollno;
            cout<<marks;
        }
        };

int main(){
    student s;
    s.display();
    return 0;
}
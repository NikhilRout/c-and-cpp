#include <iostream>
#include <string.h>

using namespace std;

class person{
    private:
        char name[20];
    public:
        void getdata(char nam[20]){
            strcpy(name,nam);
        }
        void display(){
            cout<<name;
        }
};

class student: public person{
    private:
        int regno;
        char email[20];
    public:
        void getStudentData(int regn, char email[]){
            regno = regn;
            strcpy(this->email,email);
        }
        void display(){
            person::display();
            cout<<'\t'<<regno<<'\t'<<email<<endl;
        }
};


int main(){

    int* ptr = new int[5];
    for(int i = 0; i< 5; i++){
        cin >> ptr[i]; 
    }
    for(int i = 0; i < 5; i++){
        cout<<*(ptr+i)<<endl;
    }
    
/*
    student s;
    char name[20], email[20];
    int regno;
    cin>>name>>regno>>email;
    s.getdata(name);
    s.getStudentData(regno,email);
    s.display();
    return 0;*/
}
#include <iostream>
using namespace std;

void chandler(int test){
    try{
        if(test)
            throw test;
        else throw "Value is zero";
    }
    catch(int i){
        cout << "Caught Exception #:" << i;
    }
    catch(const char* str){
        cout<<"Caught a string";
        cout<<str<<'\n';
    }
}

int main(){
    cout<<"Start\n";
    chandler(1); chandler(2);
    chandler(0); chandler(3);
    cout<<"End";

    return 0;
}
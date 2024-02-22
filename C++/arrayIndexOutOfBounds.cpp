#include <iostream>
using namespace std;

void aiob(int x){
    if();
}

int main(){
    int arr[5];

    try{
        cout<<"inside the try block \n";
        aiob(arr[13]);
    }
    catch(){
        cout<<"Caught the exception\n";
    }
    return 0;
}
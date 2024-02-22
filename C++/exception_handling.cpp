#include <iostream>
using namespace std;

void divide (int x, int y, int z){
    cout << "Inside the function\n";
    if((x-y!=0)){
        int R = z/(x-y);
        cout<< "Result ="<<R<<"\n";
    }
    else{
        throw(x-y);
    }
}

int main(){
    try{
        cout<<"inside the try block \n";
        divide(20,10,30);
        divide(30,30,60);
    }
    catch(int &i){
        cout<<"Caught the exception\n";
        cout<<i;
    }
    return 0;
}

#include <iostream>
using namespace std;
int x = 11;
int main(){
    int x = 22;
    cout<<"In main: x = "<<x<<endl;
    {
    int x = 33;
    cout<<"In block inside main: x = "<<x<<endl;
    }
    cout<<"In main: ::x = "<<::x<<endl;
    return 0;
}

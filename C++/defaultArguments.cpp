#include <iostream>
using namespace std;

int vol(int i =10, int j = 5, int k = 7);

int main(){
    printf("test\n");
    cout<<vol()<<endl;
    cout<<vol(1)<<"\n";
    cout<<vol(1,2,3);
}

int vol(int i, int j, int k){
    return i*j*k;
}
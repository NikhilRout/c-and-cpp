#include <iostream>
using namespace std;
int main(){
    int num,flag =0;
    cin>>num;
    for(int i = 2; i<num; i++){
        if(num%i == 0){
            flag++;
        }
    }
    if(flag == 0){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}
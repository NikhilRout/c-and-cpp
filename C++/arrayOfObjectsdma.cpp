#include <iostream>
using namespace std;

class cls{
  public:
    int a,b;
    cls() : a(10) {}
    cls(int a): a(a){}
    cls(int a, int b){
      this->a = a;
      this->b = b;
    }
    void display(){
      cout<<a+10<<endl;
    }
};

int main(){

  cls* objects = new cls[5];
  for(int i = 0; i<5; i++){
    objects[i] = cls(5,i);
  }
  for(int i = 0; i<5; i++){
    cout<<objects[i].a+objects[i].b<<endl;
  }
  delete[] objects;

  return 0;
} 
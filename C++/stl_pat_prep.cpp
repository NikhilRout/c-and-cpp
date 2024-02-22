#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main(){

//CONTAINERS
//ARRAY
array <int, 5> ar1 = {2,4,6,1,5};
cout<<ar1.size()<<endl; //size of array
cout<<ar1[2]<<endl; //array index
cout<<ar1.front()<<" "<<ar1.back()<<endl; //first and last element
cout<<ar1.empty()<<endl; //boolean result to check if arrays is empty or not
cout<<ar1.at(1)<<endl; //access element stored at specific location
array <int , 5> ar2; 
ar2.fill(2);  //fill all indexes of array with similar value
for(int i: ar2){
    cout<<ar2[i]<<" ";
}
cout<<endl;
ar1.swap(ar2); //swap ar1 ar2 arrays
ar2.data(); //points to first element in array object
for (auto i = ar2.begin(); i != ar2.end(); ++i){
    cout << ' ' << *i;
}


//VECTOR
vector <int> vec;
vec.push_back(2);




return 0;
}

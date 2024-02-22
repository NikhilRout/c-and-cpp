#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {3,4,5,6};

    for(auto it = vec.begin(); it != vec.end(); ++it) //alternatively begin(vec) end(vec) -> need std::
        cout<<*it<<" ";

    cout<<endl;

    for(auto element: vec)
        cout<<element<<" ";

    cout<<endl;
    
    for(int i = 0; i<vec.size(); i++)
        cout<<vec[i]<<" ";
    
    cout<<endl;
}

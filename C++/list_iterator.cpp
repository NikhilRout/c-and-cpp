#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void showlist(list <int> g){
    list <int> :: iterator it;
    for(it = g.begin();it!=g.end();++it)
        cout<<'\t'<<*it;
    cout<<"\n";
}

int main(){
    list <int> gqlist1;
    for(int i = 0; i<10;++i){
        gqlist1.push_back(i);
    }
    cout<<"\nList 1(gqlist1) is: ";
    showlist(gqlist1);
    for(int i = 10; i<20;++i){
        gqlist1.push_front(i);
    }
    cout<<"\nList 1(gqlist1) is: ";
    showlist(gqlist1);

    cout<<"\nqqlist1.front(): " << gqlist1.front();
    cout<<"\ngqlist1.back(): "<< gqlist1.back();

    cout<<"\ngqlist1.pop_front(): ";
    gqlist1.pop_front();
    showlist(gqlist1);

    cout<<"\ngqlist1.pop_back(): ";
    gqlist1.pop_back();
    showlist(gqlist1);
   
    cout<<"\ngqlist1.reverse(): ";
    gqlist1.reverse();
    showlist(gqlist1);

    cout<<"\ngqlist1.sort(): ";
    gqlist1.reverse();
    showlist(gqlist1);
    
}
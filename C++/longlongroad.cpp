#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("longLongRoad.txt");
    string str = "tom petty ";
    fout<<str<<"GTA6";
    fout.close();

    /*ifstream fin;
    fin.open("longLongRoad.txt");
    char ch;
    while(1){
        fin.get(ch);
        if(fin.eof())
            break;
    }
    cout<<ch;
    fin.close();*/
    
    ifstream fin;
    fin.open("longLongRoad.txt");
    string str2;
    while(1){
        getline(fin, str2);
        if(fin.eof())
            break;
    }
    cout<<str2;
}
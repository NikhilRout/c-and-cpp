/* 
//WRITING IN A FILE
#include <fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("out.txt",ios::out);

    char str[300] = "Time is a great teacher but unfortunately it kills all its pupils.Beriloz";
    fout<<str;
    fout<<"but unfortunately it kills all its pupils. Beriloz";
    fout.close();
    return 0;
}
*/

/*
//READING FROM A FILE
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("out.txt");
    char ch;
    while(1){
        fin.get(ch);
        if(fin.eof())
        break;
        cout<<ch;
    }
    fin.close();
    return 0;
}
*/


#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("file_handling.txt");
    fout<<"nope";
    fout.close();

    ifstream fin;
    fin.open("file_handling.txt");
    char ch;
    while(1){
        fin.get(ch);
        if(fin.eof())
        break;
        cout<<ch;
    }
    fin.close();
    
    return 0;
}
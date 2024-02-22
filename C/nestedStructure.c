/*structure student----has 4 data members -----id, name, school, proctor id
structure proctor----has 2 data members----- id and name 
search will take one integer argument (giving roll no. should print corresponding proctor name)
proctor id is common between both structures
do with pointers
*/

#include <stdio.h>

struct student{
    char student_name[10];
    int student_id;
    char school[10];
    int proctor_id;
}s[50];

struct proctor{
    int proctor_id;
    char proctor_name[10];
}p[50];

int search(int);

int main(){
    struct student std1 = {"Nikhil",221020,"SENSE",12345};
    struct proctor p1 = {12345,"manikandan"};


    return 0;
}

int search(int a){
    if (a == st1.student_id){
        if(student.proctor_id == proctor.proctor_id){
            printf("%s",proctor.proctor_name);
        }
    }       
}

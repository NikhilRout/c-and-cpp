#include <stdio.h>
#include <string.h>

void read(int);
void display(int);
void sort(int);
void list(int,char[]);

struct student{
    char name[10];
    int reg_no;
    char school[10];
    float cgpa;
    int proctor_id;
    char email[10];
}stu[5];

void read(int n){
    for(int i = 0; i<n;i++){
        printf("Enter name:\n");
        scanf("%s",stu[i].name);
        printf("Enter reg_no:\n");
        scanf("%d",&stu[i].reg_no);
        printf("Enter school:\n");
        scanf("%s",stu[i].school);
        printf("Enter cgpa:\n");
        scanf("%f",&stu[i].cgpa);
        printf("Enter proctor_id:\n");
        scanf("%d",&stu[i].proctor_id);
        printf("Enter email:\n");
        scanf("%s",stu[i].email);
    }
}

void display(int n){
    for(int i = 0; i< n;i++){
        printf("%s\t%d\t%s\t%.2f\t%d\t%s \n",stu[i].name,stu[i].reg_no,stu[i].school,stu[i].cgpa,stu[i].proctor_id,stu[i].email);
    }
}

void sort(int n){
    struct student o[5];
    char p[10];
    for(int i = 0; i<n;i++){
        for(int j =0;j<n;j++){
            if(stu[i].cgpa>stu[j].cgpa){
              o[i] = stu[j];
              stu[j] = stu[i];
              stu[i] = o[i];
            }
        }
    }
    printf("Sorted students based on cgpa:");
    for(int i = 0; i<n;i++){
        printf("%s ", stu[i].name);
    }
    printf("\n");
}

void list(int n,char s[]){
    printf("Students under %s school: ",s);
    for(int i =0; i<n;i++){
        if(strcmp(stu[i].school,s)==0){
            printf("%s ",stu[i].name);
        }
    }
}

int main()
{
    int n;
    char school[10];
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("Enter school to be checked: ");
    scanf("%s",school);
    
    read(n);
    display(n);
    sort(n);
    list(n,school);
    
    return 0;
}

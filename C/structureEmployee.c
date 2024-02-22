#include <stdio.h>
#include <string.h>

struct employee {
  char emp_id[30];
  char name[30];
  char dept[30];
  char email[30];
  char salary[30];
  char manager_id[30];
};


int main() {
  int i, n;
  printf("Enter number of employees: ");
  scanf("%d", &n);
  struct employee s[n]; 

  for (i = 0; i < n; i++) {
    printf("Enter employee id %d: ", i + 1);
    scanf("%s", s[i].emp_id);
    printf("Enter name of employee %d: ", i + 1);
    scanf("%s", s[i].name);
    printf("Enter dept of employee %d: ", i + 1);
    scanf("%s", s[i].dept);
    printf("Enter email of employee %d: ", i + 1);
    scanf("%s", s[i].email);
    printf("Enter salary of employee %d: ", i + 1);
    scanf("%s", s[i].salary);
    printf("Enter manager_id of employee %d: ", i + 1);
    scanf("%s", s[i].manager_id);
  }
  
  for (i = 0; i < n; i++) {
    printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n", s[i].emp_id, s[i].name, s[i].dept, s[i].email, s[i].salary, s[i].manager_id);
  }
  int e;
  printf("Enter employe struct number who's salary must be updated : ");
  scanf("%d",&e);
  printf("Enter new salary of the employee: ");
  scanf("%s",s[e].salary);
  for (i = 0; i < n; i++) {
    printf("%s\t%s\t%s\t%s\t%s\t%s\n", s[i].emp_id, s[i].name, s[i].dept, s[i].email, s[i].salary, s[i].manager_id);
  }
  
  return 0;
}
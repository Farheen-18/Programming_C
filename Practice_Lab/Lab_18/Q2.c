PracticeLab1_Question2

Create a structure called Employee. It should contain the ID, name and job of employees. Read the ID, first name and job
of 3 employees as input, and print the details of the employee whose ID is 2.

#include <stdio.h>

struct Employee
{
int ID;
char name[30];
char job[30];
};

int main()
{
  struct Employee E1, E2, E3;

  printf("Enter ID, first name , job of Employee 1\n");
  scanf("%d %s %s", &E1.ID, &E1.name, &E1.job);

  printf("Enter ID, first name , job of Employee 2\n");
  scanf("%d %s %s", &E2.ID, &E2.name, &E2.job);

  printf("Enter ID, first name , job of Employee 3\n");
  scanf("%d %s %s", &E3.ID, &E3.name, &E3.job);

  printf("Details of Employee 2: \n%d %s %s", E2.ID, E2.name, E2.job);

  return l;
  
}

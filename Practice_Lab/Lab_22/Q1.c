PracticeLab3_Question1

Consider that you are managing the records for the 99th precinct of the NYPD. 
  
You have been given the details of the
employees of the precinct in the form of an array of pointers to employee structs.
  
Each employee struct has the
following fields: 
    char name[20]: the name of the employee 
    int age: the age of the employee 
    int salary: the salary of the employee 
    employee *manager: a pointer to the manager of the employee.

If the employee does not have a manager, the pointer is set to NULL .If the employee has a manager, manager points to
the manager's struct.
  
A main() program has been written that makes use of certain functions. These functions need to be completed for the
proper functioning of the program.

    1.Complete the function print_employee() that prints the details of the employee whose struct is pointed to by a parameter e. 
    2.Complete the function superiors() that prints the details of all the superiors of the employee and returns the number of
       superiors. 
    3.Complete the function average_salary() that returns the average salary of all the employees in the array of pointers to
      employee structs. 

*.The file has been equipped with numerous comments explaining what the different functions do

*.The main() has been provided. You need not modify it but you are encouraged to go through it first to get a sense of
  what the program is trying to achieve. 

*.There are four additional functions defined in the file: (The parameters are not mentioned here. They are explained in
  detail in the “.c” file) 

        *. print_employee(): This function prints the details of the employee whose struct is pointed to by e. This function needs
                              to be written by you.
         
        *. print_all_employees(): This function prints the details of all the employees whose structs are pointed to by the
                                  elements of e. This function has been written for you. You do not need to modify it. You would notice that it uses the
                                  print_employee() function that you wrote. Thus, you need to write the print_employee() function before you can use this
                                  function.

        *. superiors(): This function prints( the details of all the superiors of the employee whose struct is pointed to by e and
                        returns the number of superiors. This function needs to be written by you. 

        *. average_salary(): This function takes in the array of pointers to employee structs and returns the average salary of all
                             the employees in the array. This function needs to be written by you.
// ============================================================================
  /*
Week 8
You manage the records for the 99th precinct of the NYPD. You have been given the 
details of the employees of the precinct in the form of an array of pointers to employee 
structs. Each employee struct has the following fields:
    char name[20]: the name of the employee
    int age: the age of the employee
    int salary: the salary of the employee
    employee *manager: a pointer to the manager of the employee
        If the employee does not have a manager, the pointer is set to NULL
        If the employee has a manager, manager points to the manager's struct
A main() program has been written that makes use of certain functions. 
These functions need to be completed for the proper functioning of the program.
*/
#include <stdio.h>
typedef struct employee
{
    char name[20];
    int age;
    int salary;
    struct employee *manager;
    /*
    If the employee does not have a manager, manager is NULL 
    NULL is a special value that is used to indicate that a pointer does not point to anything
    We shall learn more about NULL pointer in a later lecture
    If the employee has a manager, manager points to the manager's struct
    */
} employee;

void print_employee(employee *e)
{
    /*
    Parameters:
    employee *e: the pointer to the employee struct whose details are to be printed.
 
    Functionality:
    print_employee() prints the details of the employee whose struct is pointed to by e.
    For example, if e points to the struct of the employee "Holt", print_employee() prints
    "Name: Holt, Age: 30, Salary: 100000, Manager: NA"
    If e points to the struct of the employee "Terry", print_employee() prints
    "Name: Terry, Age: 50, Salary: 100000, Manager: Holt"
    */

    // Write your code here
 
   if (e->manager) 
   {
    printf("Name: %s, Age: %d, Salary: %d, Manager: %s\n", e->name, e->age, e->salary, e->manager->name);
    } 
   else 
   {
    printf("Name: %s, Age: %d, Salary: %d, Manager: NA\n", e->name, e->age, e->salary);
   }
}

void print_all_employees(employee *e[], int n)
{
    /*
    Parameters:
    employee *e[]: the array of pointers to employee structs.
 
    int n: the number of elements in the array of pointers to employee structs.
 
    Functionality:
    print_all_employees() prints the details of all the employees whose structs are 
    pointed to by the elements of e.

    This function has been written for you. You do not need to modify it.
    You would notice that it uses the print_employee() function that you wrote.
    Thus, you need to write the print_employee() function before you can use this function.
    */
    printf("The employees of the 99th precinct are:\n");
    for (int i = 0; i < n; i++)
    {
        print_employee(e[i]);
    }
}

int superiors(employee *e)
{
  //Superior is employee's manager-> then their manager -> and so on. Unless it is null
    /*
    Parameters:
    employee *e: e is a pointer to the employee whose superiors are to be printed.
 
    Functionality:
    superiors() prints the details of all the superiors of the employee whose struct is
    pointed to by e and returns the number of superiors.
    Superior of an employee is the employee's manager, the manager's manager and so on.
    Someone one the manager's level, but not the manager, is not a superior.
    For example, if e points to the struct of the employee "Jake", superiors() prints 
    the details of "Holt" and "Terry", but not "Gina" or "Amy".
    Use print_employee() to print the details of the superiors.
    */

  int num_superiors = 0;
    while (e->manager) {
        num_superiors++;
        print_employee(e->manager);
        e = e->manager;
    }
    return num_superiors;
}

int average_salary(employee *e[], int n) // Equivalent to int average_salary(employee **e, int n)
{
    /*
    Parameters:
    employee *e[]: e is an array of pointers to employee structs.
 
    Functionality:
    average_salary() takes in the array of pointers to employee structs and returns the
    average salary of all the employees in the array.

    int avg_salary has been declared and initialized to -1 for your convenience. You need to
    update this variable with the correct value and return it.
    */
    int avg_salary = 0;
    int sum_salary = 0;
    for (int i=0; i<n; i++)
      {
        sum_salary = (*(e+i)).salary;
      }
    avg_salary = sum_salary/n;
    return avg_salary;
}
int main()
{
    employee e1 = {"Holt", 50, 100000, NULL};
    employee e2 = {"Terry", 35, 80000, &e1};
    employee e3 = {"Gina", 25, 40000, &e1};
    employee e4 = {"Jake", 30, 60000, &e2};
    employee e5 = {"Amy", 28, 70000, &e2};
    employee e6 = {"Charles", 35, 50000, &e2};
    employee e7 = {"Cheddar", 5, 0, &e1};
    employee e8 = {"Rosa", 30, 60000, NULL};
    employee *employees[] = {&e1, &e2, &e3, &e4, &e5, &e6, &e7, &e8};
  
    int n = 8;
  
    print_all_employees(employees, n);
    printf("--------------------------------------------\n");
  
    printf("The average salary of the employees is %d\n", average_salary(employees, n));
    printf("--------------------------------------------\n");
  
    printf("The superiors of %s are:\n", e4.name);
    int superiors_of_e4 = superiors(&e4);
    printf("The number of superiors of Jake is %d\n", superiors_of_e4);
    printf("--------------------------------------------\n");
  
    printf("The superiors of %s are:\n", e8.name);
    int superiors_of_e8 = superiors(&e8);
    printf("The number of superiors of Rosa is %d\n", superiors_of_e8);
    return 0;
}

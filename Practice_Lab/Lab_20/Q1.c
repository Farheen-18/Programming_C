PracticeLab1_Question1

Write a program to swap two numbers(integers) using pointers. The program should read two integer numbers from the user
and store them in the variables a and b. Then print the numbers before and after swapping. 
The program should use pointers to swap the values of a and b. 
The program should print the values of a and b before and after swapping.

Two pointers, p and q, point to the variables a and b, respectively. The swapping code should not use the variables a
and b directly. They must achieve the swapping on a and b by using the references p and q and any temporary variables
like int temp. 

Example: If the user enters 10 and 20, the program should print the following output: 
Enter two numbers: 10 20 
Before swapping: a = 10, b = 20 
After swapping: a = 20, b = 10.

#include <stdio.h>

int main()
{
  int a,b;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &a, &b);

  int *ptr_a = &a;
  int *ptr_b = &b;

  printf("\nBefore swapping: %d %d", *ptr_a, *ptr_b);
  
  int temp = *ptr_a;
  *ptr_a = *ptr_b;
  *ptr_b = *ptr_a;

  printf("\nAfter swapping: %d %d", *ptr_a, *ptr_b);

  return 0;
}

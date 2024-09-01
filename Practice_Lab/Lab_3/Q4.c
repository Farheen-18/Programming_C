/*
Practice Lab 3_Question 4

Write a C program that takes two positive numbers, a and b, as input from the user. 
If either of the numbers is less than or equal to zero, then terminate the program there itself. 
Use a for loop to print the value of a raised to the power b, 
*/

#include <stdio.h>

int main()
{
  int a,b;
  int value = 1;
  scanf("%d %d", &a, &b);
  if (a<= 0 || b<=0)
    return 0;
  for (int i=0; i<b; i++)
    value *= a;
  printf("%d", value);
}

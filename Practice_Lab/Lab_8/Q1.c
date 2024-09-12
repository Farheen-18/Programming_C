/*
PracticeLab1_Question2

Consider a program that takes an integer value n from the user and creates an array of integers of size n. 
It then populates the above array by taking values as input from the user in a loop. The program is then left blank. 
You are required to write code to compute the bitwise AND of all the elements in the array. 
This result should then be displayed to the user.

For example, if our array is int arr[5] = {1,2,3,4,5}, then you should compute 1 & 2 & 3 & 4 & 5 
and display the result as 0 of that computation.

Testcase1

Input - {12,25}

Output - 8
  */
#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i=0; i<n; i++)
    {
      scanf("%d", &arr[i]);
    }
  for (int i=0; i<n; i++)
    {
      printf("%d", arr[i]);
    }
}

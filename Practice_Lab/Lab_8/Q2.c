/*
PracticeLab1_Question1

Write a program that takes an integer value n from the user and creates an array of integers of size n.
You must ensure that it populates the above array by taking values as input from the user in a loop. 
You also need to ensure that the program prints the second last element of the above array.

For example, if our array is int arr[5] = {1,2,3,4,5}, then your program should print 4, 
which is the second last element of the array.
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
  printf("%d", arr[n-2]);
}

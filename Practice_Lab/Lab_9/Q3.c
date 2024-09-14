/*
PracticeLab2_Question3

Consider a program that takes an integer value n from the user and creates an array of integers of size n. 
It then populates the above array by taking values as input from the user in a loop. 
  We then declare a variable found. The program is then left blank. 
  You need to write code to check whether the pair [2,3] exists in the entered array consecutively in that sequence. 
If it does, your program should set the found variable to 1. 
If it does not exist, your program should set the found variable to 0. 
The program then prints whether or not the pair has been found.

For example, if our array is int arr[5] = {1,2,3,4,5}, then you should set found = 1. 
If the array is int arr[5] = {2,4,3,4,5}, then you should set found = 0.
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
  int found = 0;
  for (int i=0; i<(n-1); i++)
  {
    if ((arr[i] == 2) && (arr[i+1] == 3))
      found =1;
  }
  printf("%d\n", found);
  return 0;
}

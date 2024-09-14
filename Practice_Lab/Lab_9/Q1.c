/*
PracticeLab2_Question1

Consider a program that takes an integer value n from the user and creates an array of integers of size n. 
It then populates the above array by taking values as input from the user in a loop. 
 You are required to write the code to calculate the total number of positive integers in the array. 
 Your program should print the result.

For example, 
if our array is int arr[10] = {-5,-4,-3,-2,-1,0,1,2,3,4}, t
hen you should be printing 5, 
which is the number of positive integers in the array.
*/

#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int arr[n];
  int posarr[n];

  for (int i=0; i<n; i++)
    {
      scanf("%d", &arr[i]);
    }
  int count=0;
  for (int i=0; i<n; i++)
    {
      if (arr[i] >= 0)
      {  posarr[count] = arr[i];
         count ++;
      }
    }
  for (int i=0; i<count; i++)
  {
      printf("%d ", posarr[i]);
  }
  printf("\n");

  return 0;
}

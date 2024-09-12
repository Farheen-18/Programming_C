/*
PracticeLab1_Question3

Consider a program that takes an integer value n from the user and creates an array of integers of size n. 
It then populates the above array by taking values as input from the user in a loop. 
It then declares two integers even and odd. 
The program is then left blank. 
You are required to write code to compute the number of even elements in the array and the number of odd elements in the array. 
Your program should print these values.

For example, if our array is int arr[5] = {1,2,3,4,5}, 
then your program should display 2 and 3 as the number of even and odd elements in the array, respectively.
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
  int n_even, n_odd=0,0;
  for (int i=0; i<n; i++)
    {
      if (arr[i]%2 == 0)
        n_even+=1;
      else
        n_odd +=1;
    }
  printf("%d %d\n",n_even,n_odd);
}

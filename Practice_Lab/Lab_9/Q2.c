/*
PracticeLab2_Question2

Consider a program that takes an integer value n from the user and creates an array of integers of size n. 
It then populates the above array by taking values as input from the user in a loop. 
  The program is then left blank. 
  You need to write code to find the third smallest element in the array. 
  Note that this is not a straightforward problem, as the elements of the array may be in any order. 
  [Hint: Use selection sort first.]

For example, if our array is int arr[8] = {17, 65, 4, 23, 12, 0, 2, 22}, 
your program should display 4, which is the smallest element in the array after 0 and 2. 
Your program should work for any input array.
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
    int min_no = i;
    for (int j=i; j<n; j++)
    {
      if (arr[j]< arr[min_no])
      {
        min_no = j;
      }
    }
    int temp = arr[min_no];
      arr[min_no] = arr[i];
      arr[i]= temp;
  }
for (int i=0; i<n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n%d", arr[2]);
  return 0;
}

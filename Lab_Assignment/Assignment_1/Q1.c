/*
Frequency_Question

 Write a C program to input a number and a specific digit (0-9) from the user, 
   and print how many times the digit appears in the provided number. 
   The counting must be done by a function frequency() in main.c which takes the inputs from the user and returns the frequency to the user.

Sample Input
#1
122353

3

Frequency of 3 in 122353 is: 2
#2
4491

5

Frequency of 5 in 4491 is: 0
 */

#include <stdio.h>
  
int frequency(int, int);

int main()
{
  int num;
  int digit;
  scanf("%d %d", &num, &digit);

  int ans = frequency(num, digit);

  printf("Frequency of %d in %d is: %d\n", digit, num, ans);

  return 0;
}

int frequency(int num, int digit)
{
  int count=0;
  while (num!=0)
  {
    if (num%10 == digit)
      count ++;
    num=num/10;
  }
  return count;
}












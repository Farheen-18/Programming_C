/*
Write a program to verify the Collatz conjecture. Here, the Collatz conjecture is asking whether repeating two simple arithmetic operations will eventually transform every positive integer into 1. Consider the following two operations:

When the number is odd:
                   f(odd) = 3*odd + 1

When the number is even:
                   f(even) = even/2

With these two transformations, any number should ultimately reach 1. For example, taking 10 will generate the following series till 1: 
                    10   5   16   8   4   2   1  

This is just a conjecture and not a theorem. You need to verify if all the numbers from 1 to 1000000 follow this conjecture. Write a program that loops through numbers from 1 to N, and then for each number, it loops with either of the two operations until number 1 is seen.
If the loop runs infinitely, it means that the conjecture is not holding correctly for that number yet.
[Hint: Explore long long or unsigned long long data types for variable declaration.]
*/


#include <stdio.h>

int main()
{
  int N;
  while (N>1 && N< 1000000)
    {scanf ("%d", &N);}

  for (int i=2; i<=N; i++)
    {
      int num=i;
      while (num==1)
        {
          if (num%2 == 1) 
          {
            num = (3*num)+1;
          }
          else if (num%2 ==0)
          {
            num == num/2;
          }
          printf("%d", num);
        }
      printf("\n");
    }
  
  return 0;
}

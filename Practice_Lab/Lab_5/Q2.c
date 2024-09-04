/* The program checks if the given number is a perfect number:

In number theory, a perfect number is a positive integer that is equal to the sum of its positive divisors, excluding
the number itself. For instance, 6 has divisors 1, 2, and 3, and 1 + 2 + 3 = 6, so 6 is a perfect number.

Testcase 1
Input a number to check: 371
371 is NOT a Perfect number.

Testcase 2 
Input a number to check: 496
496 is a Perfect number.

Testcase 3
Input a number to check: 40
40 is NOT a Perfect number. */

//find factors // add factors // compare with original number

#include <stdio.h>

int is_perfect_num(int num);

int main()
{
  int num;
  scanf("%d", &num);

  if (is_perfect_num(num)==1)
    printf("%d is a perfect number\n", num);
  else 
    printf("%d is not a perfect number\n", num);

  return 0;
}

int is_perfect_num(int num)
{
  int sum_of_factors = 0;
  int store_num = num;

  for (int i=1; i<((num/2)+1); i++)
    {
      if (num%i==0)
        sum_of_factors += i;
    }

  if (sum_of_factors == store_num) return 1;
  return 0; 
}



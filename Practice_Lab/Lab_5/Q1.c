/* PracticeLab2_Question1

The program checks if the given number is an Armstrong number:
Armstrong number is a number that is equal to the sum of cubes of its digits. For example, 0, 1, 153, 370, and 371 are
the Armstrong numbers.371 = 3^3+7^3+1^3 (^ means the power of).

Testcase 1
Input a number to check: 371
371 is an Armstrong number.

Testcase 2 
Input a number to check: 496
496 is NOT an Armstrong number.

Testcase 3
Input a number to check: 40
40 is NOT an Armstrong number.
*/
//Part 1 -- Armstrong number

#include <stdio.h>

int is_armstrong(int num);

int main()
{
  int num;
  scanf("%d", &num);

  if (is_armstrong(num)==1)
  {
    printf("%d is an armstrong number.\n", num);
  }
  else printf("%d is not an armstrong number.\n", num);

  return 0;
}

int is_armstrong(int num)
{
  //323 %10 = 3, num=num/10 = 32
  int store_num = num;
  int check_armstrong = 0; //to calculate the cubes
  int remainder=0;
  if (num==1 || num==0) return 1;

  while (num != 0 )
    {
      remainder = num%10;
      check_armstrong +=  (remainder)*(remainder)*(remainder);
      num = num/10;
    }
  if (check_armstrong == store_num) return 1;

  return 0;
}

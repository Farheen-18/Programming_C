/* Complete the code to find if the given number is a palindrome or not.
A number is a palindrome when its digits in reverse order form the same number. The reverse digits of 12321 are 12321,
which equals the same number. Hence, 12321 is a palindrome. The reverse digits of 12301 are 10321, which are not equal
to the same number. Hence, 12301 is not a palindrome.


Testcase 1
Please Enter a number: 12321
12321 is a palindrome.

Testcase 2
Please Enter a number: 12
12 is NOT a palindrome.

Testcase 3
Please Enter a number: 121
121 is a palindrome.

Testcase 4
Please Enter a number: 11
11 is a palindrome. */

//new num = old num*10 + remainder

#include <stdio.h>

int is_palindrome(int num);

int main()
{
  int num;
  scanf("%d", &num);

  if (is_palindrome(num)==1)
    printf("%d is a palindrome\n", num);
  else printf("%d is not a palindrome\n", num);
}

int is_palindrome(int num)
{
  int new_num=0;
  int remainder=0;
  int store_num = num;
  
  while (num!=0)
    {
      reaminder = num%10;
      new_num = new_num*10 + remainder;
      num= num/10;
    }
  if (new_num == store_num) return 1;
  return 0;
}


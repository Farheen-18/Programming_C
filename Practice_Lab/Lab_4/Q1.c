/*
PracticeLab1_Question1

Write a C program to check if a given number is Odd or Even. The program should take a number as input from the user in
the main() function, then using a function check_odd_or_even(), the user have to check if the number is odd or even. The
result of the check will be returned by the function back to the main() function and prints whether the number is odd or
even.

Here we will try to implement the logic of function and function call in multiple files. Detailed instructions
thoroughly on how to do that are given in the file "Instructions_Multi_File_Exe.docx". Please read the instructions
before attempting the question.


Testcase 1               Testcase 2
Enter a number           Enter a number
5                        10
5 is an odd number       10 is an even number
*/

#include <stdio.h>
// #include "check_odd_or_even()" - In future if I use multiple files

int check_odd_or_even(int);

int main()
{
  int num,ans;
  scanf("%d", &num);

  ans = check_odd_or_even(num);

  if (ans==1) printf("Even\n");
  else printf("Odd\n");

return 0; }

int check_odd_or_even(int num)
{
  if (num%2 == 0)
    return 1;
  return 0;
}



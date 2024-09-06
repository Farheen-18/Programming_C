/*
PracticeLab3_Question1

The C program in the file Question1.c contains an error. 
  Please point out the error, the type of error, and how to fix the error, 
  and then understand how the error-free program gives an output 4. */
//Code in Question
#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 5; i++)
        int a = i;
    printf("%d", a);
}
/*
My assesment of code:
Line 13 and 14 has a problem.
a is only defined for the 'for block'.
Thus the printf will give an error as a is not defined.
*/

//to correct it and also print the value:
#include <stdio.h>
int main()
{
  int i;
  int a;
  for (i=0; i<4; i++);
  a = i;
  printf("%d", a);
  return 0;
}
//to print the value of 4, we don't need the a variable as of now
#include <stdio.h>
int main()
{
  int i;
  for (i=0; i<4; i++);
  printf("%d", i);
  return 0;
}



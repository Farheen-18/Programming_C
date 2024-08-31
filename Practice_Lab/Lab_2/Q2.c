/*
 Practice Lab 2_Question 2

Use a While loop to write C programs that enable the user to enter a number and keep entering till

a) A positive number is entered

b) A negative number is entered

c) The number is either greater than 5 or less than -5

d) The number is greater than 20 and less than 100

[Note: Please use multi-line comment to comment out the previous subpart while doing the second subpart onwards.]
*/

#include <stdio.h>

int main()
{
  int num=0;
#while a positive number is entered
  while (num>0)
    {
      scanf ("%d", &num);
    }
#while a negative number is entered
  while (num<0)
    {
       scanf ("%d", &num);
    }
#The number is either greater than 5 or less than -5
  while (num>5 || num < (-5))
    {
      scanf("%d", &num);
    }
#The number is greater than 20 and less than 100
  while (num>20 && num<100)
    {
      scanf("%d", &num);
    }
  return 0;
}

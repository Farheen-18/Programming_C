/* PracticeLab1_Question3

The program aims to print an inverted triangle pattern of user given height.
Sample run:


Testcase1 

Enter the height N: 4
*******
 *****
  ***
   *

Testcase2

Enter the height N: 12
***********************
 *********************
  *******************
   *****************
    ***************
     *************
      ***********
       *********
        *******
         *****
          ***
           *
  */
#include <stdio.h>

void pattern(int);

int main()
{
  int num;
  scanf("%d", &num);

  pattern(num);

  return 0;
}

void pattern (int num)
{
  for (int i=0; i<num; i++)
    {
      for (int j=0; j<i; j++)
        printf(" ");
      for (int k=0; k<2*(num-i)-1; k++)
        printf("*");
     printf("\n"); 
    }
}

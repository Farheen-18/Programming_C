/*Practice Lab 3_Question 3

The C program in the file attached to this question intends to print an alternating pattern of 1’s and 0’s, based on the number of rows entered by the user as follows:

                    101010……

                    010101……

                    …………….

                    …………….
Testcase 1:
I:2
O: 1 0
   0 1
  
Testcase 2:
I:5
O:  10101 //odd postn. mein 0
    01010 //odd postn. pe 1
    10101
    01010
    10101
*/
#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  for (int i=0; i<N; i++)
  {  
     if (i%2 == 0)
     {
        for (int j=0; j<N; j++)
        {
          if (i%2 == 0)
            printf("1");
          else printf("0");
        }
       printf("\n");
      }
    else
   {
      for (int j=0; j<N; j++)
        {
          if (i%2 == 0)
            printf("0");
          else printf("1");
        }
      printf("\n");
   }
  }
   return 0;
  }
      




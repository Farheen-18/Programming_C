/* Modified version of Question 2 */
/*
Now, change the program that prints a triangle of alternating 0’s and 1’s instead of a square. 
Consider the following test cases for your reference.
Test case 1:
I- 3
O- 1
  0 1
  1 0 1
Test case 2:
I- 5
O- 1
  0 1
  1 0 1
  0 1 0 1
  1 0 1 0 1
*/
#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  for (int i=0; i<N; i++)
    {
      if (i%2 ==0)
      {
        for (int j=0; j<=i; j++)
          {
            if (j%2 == 0)
              printf("1");
            else printf("0");
          }
        printf("\n");
      }
      else
      {
         for (int j=0; j<=i; j++)
          {
            if (j%2 == 0)
              printf("0");
            else printf("1");
          }
        printf("\n");
      }
    }
}

/*
PracticeLab2_Question1

Write a program that performs matrix subtraction on two matrices, A and B. Implement the subtraction in two different
ways: 

(a) First, take the second matrix, B, and individually multiply all of its elements by (-1), and then add this matrix to
the first matrix, A, to obtain the result of the subtraction.

(b) Write a loop that performs elementwise subtraction by modifying the appropriate line in the given code and return
the result.

We have provided the code for you to input the two matrices and output the result matrices. You are required to write
the subtraction code.
  */

#include <stdio.h>

int main()
{
  int p,q;
  scanf("%d %d", &p, &q);

  int matrix_a[p][q];
  int matrix_b[p][q];
  int subtraction[p][q];
//Matrix A
  for (int i=0; i<p; i++)
    {
      for (int j=0; j<q; j++)
        {
          scanf("%d", &matrix_a[i][j]);
        }
    }
//Matrix B
  for (int i=0; i<p; i++)
    {
      for (int j=0; j<q; j++)
        {
          scanf("%d", &matrix_b[i][j]);
        }
    }

/*(a) First, take the second matrix, B, and individually multiply all of its elements by (-1), and then add this matrix to
the first matrix, A, to obtain the result of the subtraction.*/
/*
  for (int i=0; i<p; i++)
    {
      for (int j=0; j<q; j++)
        {
          matrix_b[i][j] *= -1;
        }
    }

  for (int i=0; i<p; i++)
    {
      for (int j=0; j<q; j++)
        {
          subtraction[i][j] = matrix_a[i][j] + matrix_b[i][j] ;
        }
    }
*/

  //============================================
/*
(b) Write a loop that performs elementwise subtraction by modifying the appropriate line in the given code and return
the result.
*/

  for (int i=0; i<p; i++)
    {
      for (int j=0; j<q; j++)
        {
          subtraction[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }
  for (int i=0; i<p; i++)
    {
      for (int j=0; j<q; j++)
      {
        printf("%d", subtraction[i][j]);
      }
    }
  
  return 0;
}

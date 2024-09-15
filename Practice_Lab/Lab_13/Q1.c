/*
PracticeLab3_Question1

Suppose that we define a new kind of product called "inverted product" (inv) between two vectors in this way: (a,b,c)
inv (x,y,z) = (a+x) * (b+y) * (c+z).

Here, we are calculating the products of sums, as opposed to sums of products in the normal dot product.
  
Say we now want to perform a new kind of matrix multiplication whereby the product between the rows and columns is
actually the inverted product as defined above (instead of the dot product as is the case in normal matrix
multiplication).

Write a C program that performs this modified matrix multiplication on two input matrices, A and B.
*/

#include <stdio.h>

int main()
{
  int p,q,s,r;
  scanf("%d %d %d %d", &p, &q, &s, &r);

  if (q!=s)
    {
      printf("Invalid index\n");
      return 0;
    }

  int A[p][q];
  int B[q][r];
  int C[p][r];
  int inv_pro = 1;
  for (int i=0; i<p; i++)
    {
      for (int j=0; j<q; j++)
        {
          scanf("%d", &A[i][j]);
        }
    }

  for (int i=0; i<q; i++)
    {
      for (int j=0; j<r; j++)
        {
          scanf("%d", &B[i][j]);
        }
    }

  for (int i=0; i<p; i++)
    {
      for (int j=0; j<r; j++)
        {
          C[i][j]-0;
          for (int k=0; k<q;k++)
            {
              inv_pro *= (A[i][k] + B[k][j]);
            }
        }
    }

    for (int i=0; i<p; i++)
    {
      for (int j=0; j<r; j++)
        {
          printf("%d", &C[i][j]);
        }
    }
    return 0;
}

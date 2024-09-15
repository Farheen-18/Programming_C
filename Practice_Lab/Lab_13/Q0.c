/*
Matrix Multiplication
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
  //p,q,r

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
          scanf("%d", &B[i][j]);xx
        }
    }
  
  int product[p][r];
  for (int i=0; i<p; i++)
    {
      for (int j=0; j<r; j++)
        {
          product[i][j] = 0;
          for (int k=0; k<q; k++)
            {
              product += (A[i][k] * B[k][j]);
            }
        }
    }
  for (int i=0; i<p; i++)
    {
      for (int j=0; j<r; j++)
        {
           printf("%d ", product[i][j]);
        }
      printf("\n");
    }

}

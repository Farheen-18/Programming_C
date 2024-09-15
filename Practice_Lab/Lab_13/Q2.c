PracticeLab3_Question2
There is a famous algorithm in graph mining theory known as "PageRank." 
The purpose of this algorithm is to find out the
most "important" page in a network on the web. 
This is a very useful algorithm, and the Google search engine uses an
advanced version of the same.

For the purpose of this problem, you need not know the details of the algorithm. 
  
You should know that, in the iterative step of the simplest variant of this algorithm, 
we perform a matrix multiplication between two matrices, A and P_i, to obtain P_i1, 
which then gets used in the next iteration to compute P_i2, and so on.

Here, A is a matrix having an equal number of rows and columns (equal to the number of web pages in the network), 
and P is a column matrix having the number of rows equal to the number of web pages in the network.
 
Considering the matrices A and P_i at a particular iteration i, 
you need to perform the iterative step of the PageRank
(just one iteration) algorithm to obtain the P_i1 matrix. 
It is important to note that this step is just one single
matrix multiplication that you need to compute.

#include <stdio.h>

int main()
  
{
  int p;
  scanf("%d", &p);

  int A[p][p];
  int P_i[p][1];

  int P_i1[p][1];

  for (int i=0; i<p; i++)
    {
       for (int j=0; j<p; j++)
          {
            scanf("%d", &A[i][i]);
          }
    }
  for (int i=0; i<p; i++)
  {
    scanf("%d", &P_i[i][1]);
  }
     
  for (int i=0; i<p; i++)
  {       
    P_i1[i][0]=0;
    for (int k=0; k<p; k++)
      P_i1 += (A[i][k] * P_i[k][0]);
  }
   
  return 0;
}
















  

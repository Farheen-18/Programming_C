/*
PracticeLab2_Question2

We have three 3x3 integer arrays: A, B, and C. 
They represent chess boards from three different tournaments. 
These three arrays hold the accumulated total number of times a chess piece has been captured at a particular position on the
chess board.  

For example, if A[2][3] = 5, it means that in the first tournament, a total of 5 pieces have been captured at the grid
position (2,3), accumulated across all games played in that tournament.

Now, based on this data, you need to compute the average number of times the pieces have been captured at specific grid
positions on the board (averaged) across all three tournaments 
and store that result (averages for each grid position)
into a new array.
*/
#include <stdio.h>

int main()
{
    int A[3][3];
    int B[3][3];
    int C[3][3];

    for (int i=0; i<3; i++)
    {
      for (int j=0; j<3; j++)
        {
          scanf("%d", &A[i][j]);
        }
    }
  for (int i=0; i<3; i++)
    {
      for (int j=0; j<3; j++)
        {
          scanf("%d", &B[i][j]);
        }
    }
  for (int i=0; i<3; i++)
    {
      for (int j=0; j<3; j++)
        {
          scanf("%d", &C[i][j]);
        }
    }

  int average[3][3];
  for (int i=0; i<3; i++)
    {
      for (int j=0; j<3; j++)
        {
         average[i][j] = (A[i][j] + B[i][j] + C[i][j])/3;
        }
    }
  for (int i=0; i<3; i++)
    {
      for (int j=0; j<3; j++)
        {
          printf("%d", average[i][j]);
        }
    }
  return 0;
}

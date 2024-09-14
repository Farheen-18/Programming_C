/*
PracticeLab1_Question1

Consider a program that takes two integers, n and m, as input from the user. It creates a 2D array of dimensions n*m. It
then populates that array with integers by taking them as input from the user. Then the program takes another integer
called 'key' as input from the user. Now, your program should find out if this integer key is present as an element in
the 2D array or not.

If the key is found in the matrix, the variable found should be set to 1; if not, found should be reset to 0.

For example, if our 2D array is {{1,2,3},{4,5,6},{7,8,9}}, and key = 10, found should be reset to 0. If, on the other
hand, key = 2, found should be set to 1.
  */

#include <stdio.h>

int main()
{
  int n,m;
  scanf("%d %d", &n, &m);
  int MD_array [n][m];

  for (int i=0; i<n; i++)
  {
    for (int j=0; j<m; j++)
      {
        scanf("%d", &MD_array[i][j]);
      }
  }

  int key;
  int found=0;
  scanf("%d", &key);

  for (int i=0; i<n; i++)
    {
      for (int j=0; j<m; j++)
      {
        if (MD_array[i][j] == key)
        { found = 1; break; }
      }
    }
  printf("%d", found);
  return 0;
}

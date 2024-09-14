/*
PracticeLab1_Question2

Consider a program that takes two integers, n and m, as input from the user. 
It creates a 2D array of dimensions n*m. 
It then populates that array with integers by taking them as input from the user. 
  Then the program takes another integer
called 'key' as input from the user. 
Now, given this 2D array, compute a number called 'term' for the array.

The term can be calculated in the following way: 
    find the product of all elements in a row of the array, calculate these
products for all the rows, 
    and then sum the products of all the rows up. 

For instance, for the simple 2D array {{1,2},{3,4}}, the 'term' would be calculated as 1*2 + 3*4 = 14.
*/
  #include <stdio.h>
int main()
{
  int n,m;
  scanf("%d %d", &n, &m);

  int md_array[n][m];

  for (int i=0; i<n; i++)
    {
      for (int j=0; j<m; j++)
        {
          scanf("%d", &md_array[i][j]);
        }
    }

  int product[n];
  for (int i=0; i<n; i++)
    {  product[i]= 1;}
  
  int term=0;;
  

  for (int i=0; i<n; i++)
    {
      for (int j=0; j<m; j++)
      {
        product[i] *= md_array[i][j];
      }
      term+=product[i];
    }

  printf("%d", term);
  return 0;
}

/*
THIS IS NOT COMPLETED YET
Consider the pattern shown below, which gets printed based on the input value of N = 5 entered by the user.

        1           
      2 3 2         
    3 4 5 4 3       
  4 5 6 7 6 5 4     
5 6 7 8 9 8 7 6 5   
*/

int main()
{
  int N;
  scanf("%d", &N);

  for (int i=1; i<= N; i++)
    {
      int j=0;
      for (j=i; j<=N-1; j++)
        {
          printf(" "); //correct
        }
      for (int j=N; k<=i; k++)
        {
          printf("%d",k);
        }
    printf("\n");
    }
}


/*
THIS IS NOT COMPLETED YET
Consider the pattern shown below, which gets printed based on the input value of N = 5 entered by the user.

        1           
      2 3 2         
    3 4 5 4 3       
  4 5 6 7 6 5 4     
5 6 7 8 9 8 7 6 5   
*/
/*
 //       By me: 
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
*/
//By AI
#include <stdio.h>

int main() {
    int N;
    
    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    // Loop through each row
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++) {
            printf("  ");
        }

        // Print increasing numbers
        int num = i;
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        // Print decreasing numbers
        num -= 2;
        for (int j = 1; j < i; j++) {
            printf("%d ", num);
            num--;
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}



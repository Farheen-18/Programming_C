/*
Practice Lab 2_Question 1

Please find the output of a C program intended to print a pattern using integers. 
  The pattern has N rows, where N is input from the user. 
The first row begins with the number N and prints all numbers from N to 1 in decreasing order. 
  The second row starts with the number N-1, and so on. The last row has the single number 1. 
  The following is the inverted right triangle pattern for N=5:         
54321
4321
321
21
1
*/
//Attempt 1 : Wrong
#include <stdio.h>
int main()
{
  int N;
  scanf("%d", &N);
  for (int i=0; i<N; i++)
  {
    for (int j=N; j>0; j--) // with this, the number of lines will always be constant. You need to solve it 
    { 
       printf("j"); // you have to print the number. missing format specifier.
    }
    printf("\n");
  }
return 0;
}
//Attempt 2: Correct
#include <stdio.h>
int main()
{
  int N;
  scanf("%d", &N);
  for (int i=0; i<N; i++)
  {
    for (int j=N-i; j>=1; j--)
    { 
       printf("%d",j);
    }
    printf("\n");
  }
return 0;
}


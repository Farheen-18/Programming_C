/*
Practice Lab 3_Question 1

The file contains a C program that is intended to take a natural number as input from the user and print the sum of squares from 1 to N. 

Testcase 1
  Input – 10
  Output – 385

Testcase 2
  Input – 17
   Output – 1785
Testcase 3
  Input – 100
  Output – 338350

b) Now, copy the above program into a new file named sum_of_cubes.c, 
  and try to modify it to print the sum of cubes from 1 to N.
  */
#include <stdio.h>
//Attempt 1
int main()
{
  int N;
  scanf("%d", &N);
  int square_sum=0;

  for (int i=1; i<=N; i++)
    square_sum += (i**2);

  printf("%d", square_sum);
}

//Attempt 2
int main()
{
  int N;
  scanf("%d", &N);
  printf("%d", (((N)*(N+1)*(2N+1))/6));
  return 0;
}

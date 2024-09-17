PracticeLab1_Question3

Consider a program that takes ten strings as input and stores them into an array of strings. 
You need to iterate over this array and detect which of these strings start with an alphabet and which do not. 
For those that do, you must store them in a separate array called alpha, 
and for those that do not, you must store them in another array called non-alpha.
The program should then display the contents of these two additional arrays.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  char array[10][50];
  char alpha_array[10][50];
  char non_alpha_array[10][50];

  printf("Enter 10 strings : ");

  for (int i=0; i<10; i++)
    {
      scanf("%s", &array[i]);
    }
  int count_alpha_array =0;
  int count_non_alpha_array =0;

  for (int i=0; i<10; i++)
  {
    if (isalpha(array[i][1]))
    {
      strcpy(alpha_array[count_alpha_array ++],array[i]);
    }
    else
    {
      strcpy(non_alpha_array[count_non_alpha_array ++],array[i]);
    }
  }
  printf("Alpha array \n");
  for (int i=0; i<count_alpha_array; i++)
  {
    printf("%s ", alpha_array[i]);
  }
  printf("\nNon Alpha array \n");
  for (int i=0; i<count_non_alpha_array; i++)
  {
    printf("%s ", non_alpha_array[i]);
  }

  return 0;
}

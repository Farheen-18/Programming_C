PracticeLab1_Question2

Consider a program that takes ten different strings as input and stores them into an array of words. You need to
determine which of these ten input strings (now stored in the array of words) has the smallest length. 

#include <stdio.h>
#include <string.h>

int main()
{
  char array[10][50];
  printf("Enter 10 strings :");
  for (int i=0; i<10; i++)
    scanf("%s", &array[i]);
  int min = strlen(array[0]);
  int index=0;
  for (int i=1; i<10; i++)
    {
      if (strlen(array[i]) < min)
        index =i;
    }
  printf("Min len = %d of %s", strlen(array[index]), array[index]);
  return 0;
}

/*
PracticeLab3_Question1

Consider a program that creates a string (a character array that ends with a \0) by taking it as input from the user. 
  For this, a construct has been used that you are not familiar with yet, but you shall learn it in the next module. 
  You are required to write the code there to count the number of vowels in the character array (vowels are the characters 'a', 'e', 'i', 'o', and 'u').

For example, if our character array is char arr[15] = {'f','a','d','e',' ','t','o',' ','b','l','a','c','k','\0'} then you should be printing 4, 
which is the number of vowels in the character array.
*/
#include <stdio.h>

int main()
{
  char string[200];
  int i=0;
  int count =0;
  scanf("%s", &string);

  for (int i=0; string[i]!='\0'; i++)
    {
      if (string[i]== 'a' || string[i]== 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
          count ++;
    }
  printf("%d", count);
  return 0;
}

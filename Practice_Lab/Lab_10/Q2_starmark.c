/* PracticeLab3_Question2

Consider a program that creates a string (a character array that ends with a \0) by taking it as input from the user. 
You are required to write a program that finds the average of the ASCII values of all the characters in the given character array (excluding the final \0). 
Then your program should display the character equivalent of that average ASCII value computed.

For example, if our character array is char arr[6] = {'a','b','c','d','e','\0'}, 
your program should display c, 
which is the character equivalent of the average of the ASCII values of the characters entered by the user */

#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  
  char char_array[n];
  int ascii_array[n];
  
  int sum=0;
  int avg;
  char character;
  
  for (int i=0; i<n; i++)
    {
      scanf("%c", &char_array[i]);
      ascii_array[i] = (int) char_array[i];
  
    }
  for (int i=0; i<n; i++)
    {
      sum += ascii_array[i];
    }
  avg = sum/n;
  character = (char) avg;
  printf("%c", character);

  return 0;
}



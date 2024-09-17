PracticeLab1_Question1

Consider the code that accepts two strings as input from the user. 
These strings represent the first name and the last name of a student, respectively. 
Based on the input strings (without spaces), you need to concatenate these strings to
display the student’s full name in block letters.

For instance, if the inputs are "Robert" and "Plant," your output should be "ROBERT PLANT."

Solution:-
  Take 2 strings
  Convert Strings to CAPITAL letters
  Concatenate it with space in between.

#include <stdio.h>
#include <ctype.h>
int main()
{
  char f_name[100];
  char l_name[100];

  int len_fn=0;
  int len_ln=0;
  
  char c;

  printf("Enter first name: ");
  while (((c= getchar())!='\n') && len_fn<99)
  {
    f_name[len_fn ++] = c;
  }
  f_name[len_fn] = '\0';

  printf("Enter last name: ");
   while (((c= getchar())!='\n') && len_ln<99)
  {
    l_name[len_ln ++] = c;
  }
  l_name[len_ln] = '\0';

  for (int i=0; i<len_fn; i++)
  { f_name[i] = toupper(f_name[i]); }

  for (int i=0; i<len_ln; i++)
  { l_name[i] = toupper(l_name[i]); }

  f_name[len_fn++]=' ';

  for (int j=0; j<len_ln; j++)
  {
    f_name[len_fn++] = l_name[j];
  }
  f_name[len_fn] = '\0';

  printf("%s", f_name);

  return 0;
}






    

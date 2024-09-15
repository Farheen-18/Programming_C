/*PracticeLab1_Question2

Based on two input strings, you need to determine whether the second string is a substring of the first. 

  A string is a substring of another if all of its characters appear in the same order consecutively in the second string. 

For example, "dimension" and "array" are both substrings of the string "multidimensional array."
*/

#include <stdio.h>

int main()
{
  int m; scanf("%d", &m); //String
  int n; scanf("\n %d", &n); //Sub string

  char string[m]; //get string
  gets(string);
  
  char substring[n]; //get 
  gets(substring);
int found =0;
  if (n>m)
  {
    printf("Not possible \n");
    return 0;
  }

  int i=0;
  int j=0;

  while (string[i]!='\0')
  { 
    if (substring[j] == string[i])
    {
      while (substring[j]!='\0')
        j++;
        { 
         for (int k=i; k<n && j<m; k++, j++)
          { 
            if (substring[j] == string[k])
              { found =1; }
            else
            {
              found =0; break; }
          }
        }
      i++;
      break;
    }
    else i++;
}
  return 0;
}

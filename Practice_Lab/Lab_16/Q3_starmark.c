PracticeLab1_Question3

Consider two sample strings already provided in the program, each of which stores two floating point numbers (but they
are strings). You need to convert these strings to actual floating point numbers and then multiply them and display the
result on the screen. 

#include <stdio.h>
#inlcude <string.h>

int main()
{
  int n;
  scanf("%d", &n);

  char str[n];
  scanf("%s", str);
  double num = atof(str);
  printf("%lf", num);
}

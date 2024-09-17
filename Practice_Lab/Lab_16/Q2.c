PracticeLab1_Question2

Consider an input string, for which your program should determine the number of alphabets, digits, and other symbols.
  
You need to report those numbers by printing them. 

We have already provided the code which reads the string as input.
You only need to write the code to find out the required counts.

#include <stdio.h>
#include <ctype.h>
  
int main()
{
int len;
scanf("%d", &len);

char str[len];
scanf("%s", &str);

int count_alphabets=0;
int count_digits = 0;
int count_symbols = 0;

for(int i=0; i<len; i++)
{
if (isdigit(str[i]) != 0) count_digits ++;
else if (isalpha(str[i]) != 0) count_alphabets ++;
else count_symbols ++;
}
printf("no of digits : %d \nno of alpha : %d \nno of symbols: %d\n", count_digits, count_alphabets, count_symbols);

return 0;
}

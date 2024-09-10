/*
PracticeLab4_Question2

The C program given in the file Question2.c is intended to print a dot three times and terminate. But due to some error,
it prints a different number of dots. Figure out what is causing the error and fix it.

Testcase1

Expected Output
  ...
*/
//code in question
/*
#include <stdio.h>
int main()
{
    int i = 0;
    for (int i; i < 5; i++)
    {
        printf(".");
    }
    return 0;
}
*/
/*
Error with the code :-
i initialised twice
second i gets garbage values.
*/

//corrected code :-
#include <stdio.h>
int main()
{
    int i = 0;
    for (i=2; i < 5; i++)
    {
        printf(".");
    }
    return 0;
}

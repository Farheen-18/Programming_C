/*
PracticeLab4_Question1

Many variables are declared in the C program in the file Question1.c with the name b. Figure out which printf will print
the value of which b variable and what will be the program output.
*/

#include <stdio.h>
char b = 'A';
int main()
{
    printf("b = %d\n", b); //prints 65
    int b = 15;
    printf("b = %d\n", b);
    for (int b = 1; b < 3; ++b)
    {
        printf("b = %d\n", b);
        short int b = 7;
        printf("b = %d\n", b);
    }

    return 0;
}

/*
Output:-

b = 65
b = 15
b = 1
b = 7

*/

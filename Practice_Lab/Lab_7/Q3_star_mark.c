/*
PracticeLab4_Question3

For the C program in the file Question3.c, you need to figure out if there is some error in the program or if it will
execute successfully. In case it executes successfully, you need to show what will be the output of the program, and if
it has an error, what is the error?
  */


// Please write down the output generated upon execution of this program.

#include <stdio.h>

static int i = 5;

void f2()
{
    int j = i;
    for (; i < j + 5; ++i)
        ;
}

void f1()
{
    int j = i;
    for (; i < j + 2; ++i)
        f2();
}

int main()
{
    printf("%d\n", i);
    f1();
    printf("%d\n", i);
}

/*
PracticeLab3_Question3

For the C program in file Question3.c, you need to show in which segment of the RAM will each of the variables and
functions declared in the program get stored. 

What will be the function frame in which the variables are stored inside the RAM? 
Solve this question by making a diagram of the memory layout of a C program.
*/

#include <stdio.h>

double pi = 3.14;
char A = 'A';

double f1()
{
    return pi; 
}

char a_char()
{
    int j = 5;
    short int k = 10;
    return A;
}

int main()
{
    char b = a_char();
    double constant = f1();
}

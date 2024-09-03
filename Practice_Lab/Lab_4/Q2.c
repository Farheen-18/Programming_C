/*
PracticeLab1_Question2

Write a C program to find the average of 4 numbers as a multi-file execution program.
A function average() is called from the main() function. You need to complete its definition. The function prompts the
user to "Enter 4 numbers:" and it stores the numbers in its local variables. It computes the average of the numbers and
returns the value.
Take the hint of parameters and return types from the function declaration and calling. Then, return the average value
in the required datatype.

DO NOT ADD ANY STATEMENT IN THE MAIN FUNCTION.

Here we will try to implement the logic of function and function call in multiple files. Detailed instructions
thoroughly on how to do that are given in the file "Instructions_Multi_File_Exe.docx". Please read the instructions
before attempting the question.

Testcase1	                     Testcase2	   
Input - Enter 4 numbers:         Input - Enter 4 numbers:
                        1                               34
                        2                               87
                        3                               21
                        4                               98   
Output - Average is: 2.500000     Output - Average is: 60.000000
*/

#include <stdio.h>
float average(void);

int main()
{
  float average_num = average();
  printf("Average is: %f\n", average_num);
  return 0;
}

float average(void)
{
  float p,q,r,s;
  printf("Enter 4 numbers:\n");
  scanf("%f %f %f %f", &p, &q, &r, &s);
  float average_num = ((p)+(q)+(r)+(s))/4.0;
  return average_num;
}

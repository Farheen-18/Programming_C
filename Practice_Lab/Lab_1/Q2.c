/*
 Write a C program that accepts as inputs the marks obtained by a student in a particular exam and then prints the description of marks obtained based on the following rules.

>=90 - Extraordinary

>=80 - Very Good

>=65 - Good

>=50 - Average

>=40 - Below Average

else - Fail

It is important to note that the program written in the file has some compile time and runtime errors. You need to resolve them so that the program works correctly. You can use the below test cases for your reference.

Testcase-1:- I:65, O:Good
Testcase-2:- I:15, O:Fail
Testcase-3:- I:49, O: Below Average
*/

#include <stdio.h>

int main()
{
  float marks;
  scanf("%f", &marks);

  if (marks>= 90 && marks <= 100)
    printf("Extraordinary\n");
  else if (marks>=80)
    printf("Very Good\n");
  else if (marks >= 65)
    printf("Good\n");
  else if (marks >= 50)
    printf("Average\n");
  else if (marks >= 40)
    printf("Below Average\n");
  else if (marks >=0 && marks < 40)
    printf("Fail");
  else
    printf("Invalid Input\n");

  return 0;
}

















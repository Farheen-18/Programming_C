/*
Grades_Question

Write a C program that prepares a report card for a student. The function report()  takes value marks from the user (integer values ranging from 0 to 100). Based on the marks, the function should assign and print the corresponding grade according to the following grading key:

90 - 100: Grade A

80 - 89: Grade B

70 - 79: Grade C

60 - 69: Grade D

50 - 59: Grade E

0 - 49: Grade F

Your function should also be capable of handling invalid inputs, such as marks outside the range 0-100. The function should not print anything.

The function returns a character that is assigned to the student (their grade). In case of invalid input, return 'X'. 


Enter your marks:

85

Grade: B

Enter your marks:

103

Invalid marks entered. Please enter a value between 0 and 100.
*/
#include <stdio.h>

char student(int);

int main()
{
  int marks;
  char grade;
  scanf("%d", &marks);
  grade = student(marks);

  if (grade == 'x')
      printf("Invalid marks entered. Please enter a value between 0 and 100.\n");
  else
    printf("Grade: %c", grade);

  return 0;  
}

char student(int marks)
{
  if (marks >= 90 && marks <= 100)
    return 'A';
  else if (marks >= 80 && marks <= 89)
    return 'B';
  else if (marks >= 70 && marks<= 79)
    return 'C';
  else if (marks >= 60 && marks<= 69)
    return 'D';
  else if (marks >= 50 && marks <= 59)
    return 'E';
  else if (marks>= 0 && marks <= 49)
    return 'F';
  else 
    return 'x';
}

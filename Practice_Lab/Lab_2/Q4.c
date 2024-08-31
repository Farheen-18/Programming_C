/*
PracticeLab 2_Question_4

 a) Complete the C program using a switch case to print the month's name for a corresponding integer the user enters. 
The program has to ensure that the user enters integers only from 1 to 12. Consider the following sample inputs and outputs:
T-1:-
  I: 3; O: March
T-2:-
  I: 11; O: November
T-3:-
  I: 2; O: February
T-4:-
  I: 13, -1, 16, 2; O: February
*/

#include <stdio.h>

int main(void)
{
  int num;

  while (num >= 1 && num <= 12)
    { scanf("%d", &num); }

  switch (num)
    {
      case 1: printf("January\n"); break;
      case 2: pritnf("February\n"); break;
      case 3: printf("March\n"); break;
      case 4: printf("April\n"); break;
      case 5: printf("May\n"); break;
      case 6: printf("June\n"); break;
      case 7: printf("July\n"); break;
      case 8: printf("August\n"); break;
      case 9: printf("September\n"); break;
      case 10: printf("October\n"); break;
      case 11: printf("November\n"); break;
      case 12: printf("December\n"); break;
    }
  
  return 0;
}

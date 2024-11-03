/*[H] Write C programs for the following: 
  
(a) Ramesh’s basic salary is input through the keyboard. His 
dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. Write a program to calculate 
his gross salary. 

Soln:
New terms:
1. Dearness allowance -- The allowance paid by company to match inflation rate/cost of living the the city. 
*/
#include <stdio.h>
int main()
{
  int basic_salary;
  scanf("%d", &basic_salary);
  int gross_salary, dearness_allowance, rent_allowance;
  dearness_allowance = 0.4 * basic_salary;
  rent_allowance = 0.2 * basic_salary;
  gross_salary = basic_salary + dearness_allowance + rent_allowance;

  printf("%d", gross_salary);
  return 0;
}
/*
--------------------------------
(b) The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance 
in meters, feet, inches and centimeters. 
*/
#include <stdio.h>
int main()
{
float dist_km, dist_meters,dist_feet, dist_inch, dist_cm;
scanf("%f", &dist_km);
dist_meters = dist_km * 1000;
dist_cm = dist_km * 100000;
dist_feet = dist_km * 3280.8399;
dist_inch = dist_km * 39370.0787;
printf("%f %f %f %f %f", dist_km, dist_meters, dist_cm, dist_feet, dist_inch);
return 0;
}
/*
------------------------------------
(c) If the marks obtained by a student in five different subjects 
are input through the keyboard, find out the aggregate marks 
and percentage marks obtained by the student. Assume that 
the maximum marks that can be obtained by a student in each 
subject is 100. 
*/
#include <stdio.h>
int main()
{
  int marks;
  float sum=0;
  for (int i=0; i<5; i++)
  {
    scanf("%d", &marks);
    sum+=marks;
  }
  float average = sum/5.0;
  printf("%f", average);
  return 0;
}
/*
-------------------------------
(d) Temperature of a city in Fahrenheit degrees is input through 
the keyboard. Write a program to convert this temperature 
into Centigrade degrees. 
*/
#include <stdio.h>
int main()
{
float temp_f;
scanf("%f", &temp_f);

float temp_C = (5/9)*(temp_F - 32);

printf("%f", temp_C);
return 0;
}
/*
---------------------------------
(e) The length & breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the 
area & perimeter of the rectangle, and the area & 
circumference of the circle. 
*/
#include <stdio.h>
int main()
{
  int len, bre, radius;
  float area_rect, area_cir, peri_rect, circ_cir;
  area_rect = len * bre;
  area_circ = 3.14 * radius * radius;
  peri_rect = 2*(len+bre);
  circ_cir = 2* 3.14*radius;
}
/*
----------------------------
(f) Two numbers are input through the keyboard into two 
locations C and D. Write a program to interchange the 
contents of C and D. 
*/

#include <stdio.h>
int main()
{
  int C,D;
  scanf("%d %d", &C, &D);

  int temp= C;
  C=D;
  D= temp;
  return 0;
}
/*
----------------------------------
(g) If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits.  
(Hint: Use the modulus operator ‘%’)  
*/

#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  int sum_of_digits=0;
  while (num>0)
  {
  sum_of_digits += num%10;
  num = num/10;
  }
  printf("%d", sum_of_digits);
  return 0;
}
/*
--------------------------------------------------
(h) If a five-digit number is input through the keyboard, write a 
program to reverse the number. 
*/
#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  int remainder=0;
  int rev_num=0;
  while (num>0)
  {
    remainder = num%10;
    rev_num = rev_num*10 + remainder;
    num = num/10;
  }
printf("%d", rev_num);
return 0;
}
/*
----------------------------------
(i) If a four-digit number is input through the keyboard, write a 
program to obtain the sum of the first and last digit of this 
number. 
*/
#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  int f_digit, l_digit;
  f_digit= num%10;
  while (num>0)
  {
  l_digit = num%10;
  num = num/10;
  }
  printf("%d %d", f_digit, l_digit);
  return 0;
}
/*
--------------------------------
(j) In a town, the percentage of men is 52. The percentage of 
total literacy is 48. If total percentage of literate men is 35 of 
the total population, write a program to find the total number                                                          
of illiterate men and women if the population of the town is 
80,000.  
*/
#include <stdio.h>
int main()
{
  int men,women,lit_men,lit_women,illit_men,illit_women,tot_lit;
  men=52;
  lit_men=35;
  tot_lit = 48;
  illit_men = men - lit_men;
  lit_women= tot_lit - lit_men;
  illit_women = 100 - men - lit_women;

  int total_i_w = (illit_women)*80000*(1/100);
  int total_i_m = (illit_men)*80000*(1/100);

  printf("%d %d", total_i_w, total_i_m);
  return 0;
}
/*
---------------------------------
(k) A cashier has currency notes of denominations 10, 50 and 
100. If the amount to be withdrawn is input through the 
keyboard in hundreds, find the total number of currency notes 
of each denomination the cashier will have to give to the 
withdrawer. 
*/
//--------------------------------------------
/*
(l) If the total selling price of 15 items and the total profit earned 
on them is input through the keyboard, write a program to 
find the cost price of one item. 
*/
#include <stdio.h>
int main()
{
  float t_s_p;
  float t_profit_p;
  float t_profit;
  float t_c_p;

  scanf("%f %f", &t_s_p, &t_profit_p);

  t_profit = (t_profit_p)*t_s_p * (1/100);

  t_c_p = t_s_p - t_profit;
  printf("%f", (t_c_p)/15);
  return 0;
}
/*
------------------------------
(m) If a five-digit number is input through the keyboard, write a 
program to print a new number by adding one to each of its 
digits. For example if the number that is input is 12391 then 
the output should be displayed as 23402.
*/
#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  int remainder=0;
  int rev_num=0;
  while (num>0)
  {
    remainder = num%10;
    rev_num = rev_num*10 + ((remainder+1)%10) ;
    num = num/10;
  }
  int req_num=0;
   while (rev_num>0)
  {
    remainder = num%10;
    req_num = req_num*10 + ((remainder) ;
    rev_num = rev_num/10;
  }
printf("%d", req_num);
return 0;
}
//-------------------------

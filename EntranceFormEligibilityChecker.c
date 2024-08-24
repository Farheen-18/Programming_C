/*
Understanding Variables and Expressions 

Assume applying for an entrance examination requires an age limit of 20 years and a registration fee of $100. Suppose a C program variable age holds the age of Mr. John, and the amt variable holds the amount in $ that he can spare for registration. 

a.     Write an expression that returns True if Mr. John is eligible for the examination, and False otherwise.

b.     If the amt is declared as a short datatype and initialized to 35000, try to print its value using the printf() function with %hd format specifier. What do you observe? How do you account for the strange output? How will you fix the issue?
*/
#include <stdio.h>
void main()
{
    int age,amount;
    scanf("%d %d", &age, &amount);
    if (age <= 20)
        {if (amount == 100)
            {
               printf("Eligible \n");
            }
        else
           {
               printf("Not Eligible \n");
           }
        }
    else
        {
            printf("Not eligible \n");
        }     
}

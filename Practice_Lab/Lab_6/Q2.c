/*
PracticeLab3_Question2

The C program in the fileQuestion2.c contains many variables, some with the same variable names also. 
Show the 
    datatype,
    storage class, and 
    scope of each variable in the C program, and also give the final output of the program.
*/

#include <stdio.h>

double i = 3.14;

void f1(int i)
{
    printf("i^3 = %d\n", i * i * i);
}

int main()
{
    int j = 2;
    for (int k = 3; k <= 9; ++k) //variable valid only for the loop // loop will execute only once
    {
        f1(k); // takes value of k in the loop and prints k^3
        k = 10;
        f1(k); // prints 10^3
        {
            int k = 1;
            f1(k); // will always print 1
        }
      //Outside the loop the value is still k=10 and not k=1
    }
    return 0;
}

/* Output:
i^3 =  27
i^3 =  1000
i^3 =  1
  */

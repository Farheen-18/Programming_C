PracticeLab4_Question1

Consider that we need to implement the absolute() functionality in C. 
The absolute value of an integer is the number without its sign. 
        For a positive number, the absolute value is the number itself. 
        For a negative number, the absolute value is the number multiplied by -1. 

For example, the absolute value of 5 is 5, the absolute value of -5 is 5. 

We do not want you to use the abs() function in the math.h library. 
You have to implement the absolute() function yourself. Try to implement it using
        call by value and 
        call by reference. 

The call by value version of the function should be called absolute_value() 
        and should return the absolute value of the input integer. 

The call by reference version of the function should be called absolute_reference() 
        and should update the value of the input integer to its absolute value. absolute_reference() should return void.

For example, if the value of int variable a is -5 and it is passed to absolute_value(), the function should return 5. 

If the value of int variable a is -5 and it is passed to absolute_reference(),
        the function should update the value of a to 5 and return void.

//////////////////////////////////////////////////////////////
#include <stdio.h>

int absolute_value(int);
void absolute_reference(int *);

int main()
{
        int num;
        scanf("%d", &num);

        int * num_ptr = &num;

        absolute_value(num);
        printf("%d\n", num);
        
        absolute_reference(&num);
        printf("%d", num);

        return 0;
}

int absolute_value(int a)
{
        if (a>=0)
                return a;
        return (-1*a);
}

void absolute_reference(int * a_ptr)
{
        if (*a_ptr < 0)
                *a_ptr *= -1;
}


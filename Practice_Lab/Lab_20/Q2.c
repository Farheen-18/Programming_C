PracticeLab1_Question2

Two integers a and b have been declared in the program. Complete the code snippet to find the number of characters that
can be stored between the start locations of a and b. 
(Hint: int pointers can be cast to char pointers)

Example: 
If the addresses of a and b are 1000 and 2000 respectively, and the size of a char is 1 byte, the program
should print the following output: "The number of characters between a at 0x3e8 and b at 0x7D0 is 1000". 
(1000 in hex is 0x3e8 and 2000 in hex is 0x7D0.)

#include <stdio.h>

#include <stdio.h>

int main() {
    int a, b;
    int diff;

    scanf("%d %d", a,b)                                                                                        
    // Get addresses of a and b
    int *a_ptr = &a;
    int *b_ptr = &b;

    // Calculate the difference in bytes
    diff = (int)b_ptr - (int)a_ptr;

    // Print the result
    printf("The number of characters between a at 0x%x and b at 0x%x is %d\n",
           (int)a_ptr, (int)b_ptr, diff);

    return 0;
}

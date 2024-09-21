/*Rotation_Question

Write a C program to check if a number reads the same upside-down, or not. 
The program should take a number as input from the user in the main() function, 
  then using the is_rotationally_same() function, must check whether the number is still the same when read upside-down. 
This boolean value (true/false) must be returned to the main() function, which then prints the result to the user. 

Go through the below sample inputs and outputs carefully. 

#1
96

Yes, the number reads the same upside-down.

Think of it as rotating a paper (with 96 written) upside-down, and then reading the number as usual, from left to right.

#2
1691

Yes, the number reads the same upside-down.

Hint- The numbers which form a valid number when rotated are-

0 -> 0

I -> I (Consider it to be ‘I’ and not ‘1’)

8 -> 8

6 -> 9

9 -> 6
  
#3
480

No, the number does not read the same upside-down.
*/

#include <stdio.h>
#include <stdbool.h>

bool is_rotationally_same(int);

int main()
{
  













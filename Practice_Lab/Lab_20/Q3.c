PracticeLab1_Question3

We know that an int, a float, and a char take 4 bytes, 4 bytes, and 1 byte each in gcc. 

Consider an array of four characters in memory. Now, these four characters are stored in four consecutive memory
locations of 1-byte width. However, the bits (0s and 1s) in these four 1-byte-wide locations can also be interpreted as
integers when an integer pointer to the starting location is dereferenced. 

Given a character array of four characters, find the integer value that the four bytes represent. Also, find the float
value. 

(Hint: Cast the pointer to the array to the appropriate types and dereference it to get the values.)

#include <stdio.h>

int main()
{
  char array[4] = {'a','b','c','d'};

  char * array_ptr = array;
  int int_num = 0;
  float float_num = 0;

  int *int_array_ptr = array_ptr;
  int_num = *int_array_ptr;

  float *float_array_ptr = array_ptr;
  float_num = *float_array_ptr;

   printf("Integer value of the characters in c is %d and the float value is %f\n",
           int_num, float_num);
  return 0;
}

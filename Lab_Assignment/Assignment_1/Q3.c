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
/*
Attempt -1 :- -- incorrect
  
#include <stdio.h>
#include <stdbool.h>

bool is_rotationally_same(int);

int main()
{
  int num;
  scanf("%d", &num);
  int is_rotational = is_rotationally_same (num);
  if (is_rotational == 1)
    printf("Yes, the number reads the same upside-down.\n");
  else if (is_rotational == 0)
    printf("No, the number does not read the same upside-down.\n");

  return 0;
}
// 1<-> 1; 
bool is_rotationally_same(int num)
{
  int len=0;
  int store_num=num;
  while (num!=0)
    {
      len++;
      num=num/10;
    }
  int rev_array[len];
  for (int i=0; i<len; i++)
    {
      rev_array[i]= store_num;
    }
  for (int i=0; i<len; i++)
    {
      if (rev_array[i]== 2 || rev_array[i] == 3 || rev_array[i] == 4 || rev_array[i] == 5 || rev_array[i] == 7)
      {
        return 0;
      }
      else if (rev_array[i] == 1)
      {
        if (rev_array[len - 1 -i] == 1)
          continue;
        else 
          return 0;
      }
       else if (rev_array[i] == 6)
      {
        if (rev_array[len - 1 -i] == 9)
          continue;
        else 
          return 0;
      }
       else if (rev_array[i] == 8)
      {
        if (rev_array[len - 1 -i] == 8)
          continue;
        else 
          return 0;
      }
       else if (rev_array[i] == 9)
      {
        if (rev_array[len - 1 -i] == 6)
          continue;
        else 
          return 0;
      }
       else if (rev_array[i] == 0)
      {
        if (rev_array[len - 1 -i] == 0)
          continue;
        else 
          return 0;
      }
    }

    return 1;
}
*/
///////////////////////////////////////////////////////////////

//Attempt 2 :

#include <stdio.h>
#include <stdbool.h>

bool is_rotationally_same(int);

int main()
{
  int num;
  scanf("%d", &num);

  if (is_rotationally_same(num))
    printf("Yes, the number reads the same upside-down.\n");
  else 
    printf("No, the number does not read the same upside-down.\n");
}

bool is_rotationally_same(int num)
{
  if (num == 0) //edge case
    return true; 
  
  int store_num = num;

  //calculate length;
  int len=0;
  for (len=0; num!=0; len++) 
    {
      num=num/10;
    }

  //make arrays for the number 
  int array_num =  store_num;
  
  int reverse_num[len];
  for (int i=0; i<len; i++) //forms array of reflection number
    {
      reverse_num[i]= array_num%10;
      array_num /= 10;
    }

  int original_num[len]; //array of original number
  for (int i=0; i<len; i++)
    {
      original_num[i]= reverse_num [len - 1 -i];
    }

//checking conditions

  for (int i=0; i<len; i++)
    {
      int temp = original_num[i];

      if ((temp ==2) || (temp == 3) || (temp == 4) || (temp == 5) || (temp == 7))
          { return false ;}
      if (temp == 6)
          {
            if (reverse_num [i]  != 9)
              return false;
          }
      if (temp == 1)
        {
           if (reverse_num[i] != 1)
             return false;
        }
      if (temp == 8)
      {
        if (reverse_num[i] != 8)
          return false;
      }
      if (temp ==9)
      {
        if (reverse_num[i] != 6)
          return false;
      }
      if (temp == 0)
      {
        if (reverse_num[i] != 0)
          return false;
      }
    }

  return true;
}









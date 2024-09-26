PracticeLab2_Question2

The definition of the Complex structure is given in the file Question2.c, which is used to represent complex numbers in
C. Also, the function signature of the addition function is provided, to add two complex numbers.

Complete the addition function, which should return the sum of the two complex numbers.

Create two new functions, subtract and multiply, which return the difference and product of the two complex numbers
respectively.

Note: You should not make any changes inside int main().

Hint: Given two complex numbers (a + ib) and (c + id), their sum is given by (a + c) + i(b + d), their difference is
given by (a - c) + i(b - d), and their product is given by (ac - bd) + i(ad + bc).


For example: If the Complex numbers are (3 + 4i) and (7 + 12i), their sum is (10 + 16i), their difference is (-4 -8i),
their product is (-27 + 64i).

#include <stdio.h>

struct complex //structure
{
  float real;
  float imag;
};

struct complex addition(struct complex c1, struct complex c2)
{
  struct complex c_add;
  c_add.real = c1.real + c2.real;
  c_add.imag = c1.imag + c2.imag;
  
  return c_add;
};

struct complex multiplication(struct complex c1, struct complex c2)
{
  struct complex c_prod;
  c_prod.real = c1.real * c2.real;
  c_prod.imag = c1.imag * c2.imag;
  
  return c_prod;
}

struct complex subtract(struct complex c1, struct complex c2)
{
  struct complex c_sub;
  c_sub.real = c1.real - c2.real;
  c_sub.imag = c1.imag - c2.imag;
  
  return c_sub;
}

int main()
{
  struct complex c1,c2;
  scanf("%f %f", &c1.real, &c1.imag);
  scanf("%f %f", &c2.real, &c2.imag);

  struct complex c_add = addition(c1,c2);
  struct complex c_prod = multiplication(c1,c2);
  struct complex c_sub = subtract(c1,c2);

  printf("Sum : %f + i (%f) \n", c_add.real, c_add.imag);
  printf("Product : %f + i (%f) \n", c_prod.real, c_prod.imag);
  printf("Subtraction : %f + i (%f) \n", c_sub.real, c_sub.imag);
  
  return 0;
}

PracticeLab1_Question1

Create a Point structure as taught in the lectures. Then, create two-point objects representing the points (3, 2) and
(-1, -5). Print the x-coordinate and y-coordinate of the points to standard output.


#include <stdio.h>

  struct Point {
      int x_coordinate;
      int y_coordinate;
  };

  int main()
{
  struct Point A,B;
  printf("Enter co-ordinates of A : \n");
  scanf("%d %d", & A.x_coordinate, & A.y_coordinate);
  printf("Enter co-ordinates of B: \n");
  scanf("%d %d", & B.x_coordinate, & B.y_coordinate);
  printf(" Point A: ( %d , %d ) \nPoint B: ( %d , %d )\n", A.x_coordinate, A.y_coordinate, B.x_coordinate, B.y_coordinate);
}


PracticeLab2_Question1

Write a program that takes N points in the x-y coordinate plane as input, and then print the point with the maximum
distance from the origin. Try to use structures in your program!

Hint: The distance of a point from the origin is equal to sqrt{x^2 + y^2}.

The input should be taken in the following format - The first line will contain only a single integer N as input. After
that, the next N lines will contain 2 real values each, first x coordinate then y coordinate.

Testcase1
    Input:
        3
        4 5
        1.5 -1.5
        0 5
    Output:
        Maximum distance = 6.403124

#include <stdio.h>
#include <math.h>

struct point
{
  float x_coordinate;
  float y_coordinate;
};

int main()
{
  int N;
  scanf("%d", &N);
  struct point co_ordinates[N];

  for (int i=0; i<N; i++)
  {
    scanf("%f %f", &co_ordinates[i].x_coordinate, &co_ordinates[i].y_coordinate);
  }

  double max_distance = 0;
  for (int i=0; i<N; i++)
    {
      double dist = sqrt((co_ordinates[i].x_coordinate * co_ordinates[i].x_coordinate) + (coordinates[i].y_coordinate * coordinates[i].y_coordinate));
      if (max_distance < dist )
        max_distance = dist;
    }

  printf("max_distance = %lf", max_distance);
  return 0;
}


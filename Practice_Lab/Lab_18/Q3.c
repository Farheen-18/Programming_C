PracticeLab1_Question3
Write a program that takes two distances as input. The distances are in the form of X kilometers and Y meters.

For example, 23 68 means 23 kilometers and 68 meters. Store the distances in a structure. After that, find the
difference between the two distances. Store this difference in another structure. (1000 meter = 1 kilometer). It is
guaranteed that the second distance is greater than the first distance.

A structure definition has been provided, complete the missing parts of the code!

Testcase1

    Input:                                             Input:

         Enter first distance = 5 40                    Enter first distance = 1 500
         Enter second distance = 10 60                  Enter second distance = 2 0

    Output:                                           Output:

        The difference is = 5 kilometers and 20 meters     The difference is = 0 kilometers and 500 meters

#include <stdio.h>

struct distance
{
    int km;
    int m;
};

int main()
{
    struct distance d1,d2,diff;

    scanf("%d %d", &d1.km, &d1.m);
    scanf("%d %d", &d2.km, &d2.m);

    int dist1 = (d1.km) * 1000 + (d1.m);
    int dist2 = (d2.km) * 1000 + (d2.m);

    int dist_diff = dist2 - dist1;

    diff.km = dist_diff /1000;
    diff.m = dist_diff % 1000;

    printf("%d %d", diff.km, diff.m);

    return 0;
}

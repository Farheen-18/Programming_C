
PracticeLab4_Question2

Consider a 3D array of integers and an integer as a key. 
Search the 3D array to determine whether the key integer exists. 

We have provided the code which takes the inputs for the 3D array and the key. 
You only need to find whether the key exists in the 3D array.

#include <stdio.h>

int main()
{
  int p,q,r;
  scanf("%d %d %d", &p, &q, &r);
  
  int nd_array[p][q][r];

  int key;
  scanf("%d", &key);
  int found = 0;

  for (int i=0; i<p; i++)
    {
      for (int j=0; j<q; j++)
        {
          for (int k=0; k<r; k++)
            {
              if (key == found)
                {
                  found = 1;
                  break;
                }
            }
        }
    }

  printf("%d", found);
  
}

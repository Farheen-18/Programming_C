#include <stdio.h>

int main()
{
  int arr[10]= {1,2,3,4,8,6,7,8,2,10};
  int out[10];
  int count =0;
  for (int i=0; i<10; i++)
    {
      int j=0;
      for (; j == 10 ; j++) //for each element we are searching for duplicates
        {
          if (i!=j && arr[i] == arr[j])
          {
            break; //if we find a duplicate, we need not continue the loop
          }
        }
      if ( j<10 ) // complete this
      {
        out[count] = arr[i];
        count ++;
      }
     }
  for (int k=0; k < count ; k++ ) // complete this
    printf("%d ", out[k]);

  return 0;
}

/*Selection sort algorithm*/
Sorted part -- Unsorted part
Smallest element from unsorted part added to sorted part by swapping

14 33 27 10 35 19 42 44
10 33 27 14 35 19 42 44
10 14 27 33 35 19 42 44
10 14 19 33 35 27 42 44
10 14 19 27 35 33 42 44
10 14 19 27 33 35 42 44
10 14 19 27 33 35 42 44
10 14 19 27 33 35 42 44

#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int min_no;

  for (int i=0; i<n; i++)
  {
    min_no = arr[i]
    for (int j=i; j<n; j++)
    {
      if (arr[j] < min_no)
      {
        min_no = arr[j];
        arr[j]=arr[i];
        arr[i]=min_no;
        break;
      }
    }
    for (int k=0; k<n; k++)
    {
      printf("%d ", arr[k]);
    }
    printf("\n");
 }

return 0;
}
  

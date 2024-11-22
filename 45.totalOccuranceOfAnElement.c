#include <stdio.h>

int firstOcc(int n, int arr[n], int x)
{
     int l = 0, h = n - 1;
     int  idx = -1;
     while (l <= h)
     {
          int mid = l + (h - l) / 2;
          if (arr[mid] == x)
          {
               idx = mid;
               h = mid - 1;
          }
          else if (arr[mid] < x)
          {
               l = mid + 1;
          }
          else
          {
               h = mid - 1;
          }
     }
     return idx;
}
int lastOcc(int n, int arr[n], int x)
{
     int l = 0, h = n - 1 , idx = -1;
     while (l <= h)
     {
          int mid = l + (h - l) / 2;
          if (arr[mid] == x)
          {
               idx = mid;
               l = mid + 1;
          }
          else if (arr[mid] < x)
          {
               l = mid + 1;
          }
          else
          {
               h = mid - 1;
          }
     }
     return idx;
}
int main()
{

     int arr[] = {0, 1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
     int n = sizeof(arr) / sizeof(arr[0]);
     int x = 4;
     int first = firstOcc(n, arr, x);
     int last = lastOcc(n, arr, x);

     if (first == -1 || last == -1)
     {
          printf("The number %d does not occur in the array.\n", x);
     }
     else
     {
          int totalOcc = last - first + 1;
          printf("The total occurrence of %d is: %d\n", x, totalOcc);
     }

     return 0;
}
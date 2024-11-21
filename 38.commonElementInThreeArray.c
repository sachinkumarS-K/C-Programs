#include <stdio.h>

int main()
{
     int arr[] = {1, 5, 10, 20, 40, 80};
     int brr[] = {6, 7, 20, 80, 100};
     int crr[] = {3, 4, 15, 20, 30, 70, 80, 120};
     int n1 = sizeof(arr) / sizeof(arr[0]);
     int n2 = sizeof(brr) / sizeof(brr[0]);
     int n3 = sizeof(crr) / sizeof(crr[0]);
     int x = 0, y = 0, z = 0;
     while (x < n1 && y < n2 && z < n3)
     {
          if (arr[x] == brr[y] && brr[y] == crr[z])
          {
               printf("Common element  :   %d\n", arr[x]);
               x++;
               y++;
               z++;
          }
          else if (arr[x] < brr[y])
          {
               x++;
          }
          else if (brr[y] < crr[z])
          {
               y++;
          }
          else
          {
               z++;
          }
     }
     return 0;
}
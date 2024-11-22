#include <stdio.h>

int findMissing(int n, int arr[n]){
     int l = 0, h = n - 1;

     while (l <= h){
          int m = l + (h - l) / 2;
          if (m + 1 < n && arr[m + 1] - arr[m] > 1){
               return arr[m] + 1;
          }
          if (m - 1 >= 0 && arr[m] - arr[m - 1] > 1){
               return arr[m - 1] + 1;
          }
          if (arr[m] == m){
               l = m + 1;
          }
          else{
               h = m - 1;
          }
     }
     return -1;
}

int main(){
     int arr[] = {0, 1, 3, 4, 5, 6, 7, 8, 9};
     int n = sizeof(arr) / sizeof(arr[0]);
     int x = findMissing(n, arr);
     printf("The missing number in the array is: %d\n", x);
     return 0;
}

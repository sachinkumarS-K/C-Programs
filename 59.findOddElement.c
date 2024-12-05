#include<stdio.h>

int main(){
     int arr[] = {1, 1, 2, 3, 3, 66, 66, 7, 7, 9, 9, 2, 8, 99, 99};
     int n = sizeof(arr) / sizeof(arr[0]) , ans = 0;
     for (int i = 0; i < n; i++){
          ans = ans ^ arr[i];
     }
     printf("%d ", ans);
     return 0;
}
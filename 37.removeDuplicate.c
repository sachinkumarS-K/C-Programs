#include<stdio.h>

void shift(int arr[] , int start , int *n){
     for (int i = start; i < *n-1; i++){
          arr[i] = arr[i + 1];
     }
     (*n)--;
}

int main(){
     int arr[] = {2, 0, 1, 3, 4, 2, 8, 2, 9, 5, 7, 3};
     int n = sizeof(arr) / sizeof(arr[0]);

     for (int i = 0; i < n; i++){
          for (int j = i + 1; j < n; j++){
               if(arr[i] == arr[j]){
                    shift(arr, j, &n);
                    j--;
               }

          }
     }

     for (int i = 0; i < n; i++)
     {
          printf("%d  ", arr[i]);
     }
          return 0;
}
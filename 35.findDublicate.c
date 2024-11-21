#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
     int t = *a;
     *a = *b;
     *b = t;
}

int findDublicate(int arr[], int n){
     while(arr[0] != arr[arr[0]]){
          swap(&arr[0], &arr[arr[0]]);
     }
     return arr[0];
}

// int findDublicate(int arr[] , int n){
//      for (int i = 0; i < n; i++){
//           int index = abs(arr[i]);
//           if (arr[index] < 0){
//                return index;
//           }
//          else
//                arr[index]*=-1;
//      }
// }

int main(){
     int arr[5] = {1, 3, 4, 2, 2};
     int n = sizeof(arr) / sizeof(arr[0]);
     printf("Dublicate element : %d", findDublicate(arr , n));
}
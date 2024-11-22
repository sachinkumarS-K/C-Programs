#include<stdio.h>

int main(){
     int arr[] = {12,35,1,10,34,1};
     int max = -1 , pre;
     int n = sizeof(arr) / sizeof(arr[0]);
     for (int i = 0; i < n; i++){
          if(arr[i] >max){
               pre = max;
               max = arr[i];
          }
          else if(arr[i] > pre && arr[i] != max){
               pre = arr[i];
          }
     }
     printf("Largest number is : %d\n", max);
     printf("Second largest number is : %d", pre);
     return 0;
}
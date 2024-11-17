#include<stdio.h>

int main(){
     int arr[] = {4, 6, 1, 7, 2, 9, 21, 5};
     int len = sizeof(arr) / sizeof(arr[0]);
     for (int i = 0; i < len; i++){
          for (int j = 0; j < len - i - 1; j++){
               if(arr[j] > arr[j+1]){
                    int t = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = t;
               }
          }
     }
     for (int i = 0; i < len; i++)
          printf("%d  ",arr[i]);
          return 0;
}
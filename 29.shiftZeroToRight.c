#include<stdio.h>

void swap(int *a , int *b){
     int t = *a;
     *a = *b;
     *b = t;
}

int main(){
     int arr[10] = {1, 0, 2, 0, 0, 4, 5, 8, 9, 0};
     int n = sizeof(arr) / sizeof(arr[0]);
     int l = 0, h = n - 1;

     while(l<=h){
          if(arr[l] >0){
               l++;
          }
          else if(arr[h] == 0){
                h--;
          }
          else{
               swap(&arr[l], &arr[h]);
               l++;
               h--;
          }

     }
     for (int i = 0; i < n; i++){
          printf("%d  ", arr[i]);
     }

          return 0;
}
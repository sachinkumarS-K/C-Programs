#include<stdio.h>

void swap(int *a, int *b){
    int t = *a;
     *a = *b;
     *b = t;
}

int main(){

     int arr[10] = {1, -2, 4, 5, -5, 8, -1, 2, 3, -8};
     int n = sizeof(arr) / sizeof(arr[0]);
     int l = 0 , h = n-1 , i = 0;
     while(l<=h){
          if(arr[l] <0){
               swap(&arr[l++], &arr[i++]);
          }
          else
               l++;
     }
     for (int i = 0; i < n; i++)
     {
          printf("%d  ", arr[i]);
     }
     return 0;
}
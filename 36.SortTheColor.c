#include<stdio.h>
void swap(int *a, int *b){
     int t = *a;
     *a = *b;
     *b = t;
}
int main(){

     int arr[] = {2, 0, 1};
     int n = sizeof(arr) / sizeof(arr[0]);
     int l = 0, h = n - 1 , m=0;
     while(m<=h){
          if(arr[m] == 0){
               swap(&arr[l], &arr[m]);
               m++;
               l++;
          }
          else if(arr[m] == 1){
               m++;
          }
          else{
               swap(&arr[h], &arr[m]);
               h--;
          }
     }
     for (int i = 0; i < n; i++)
     {
          printf("%d  ", arr[i]);
     }
     return 0;
}
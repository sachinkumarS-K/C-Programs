#include<stdio.h>

int main(){

     int arr[] = {0, 1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
     int n = sizeof(arr) / sizeof(arr[0]);
     int l = 0, h = n - 1;
     int x = 4  , idx = -1;
     while(l<=h){
          int mid = l + (h - l) / 2;
          if(arr[mid] == x){
               if(arr[mid-1] != x){
                    idx = mid ;
                    break;
               }
               else{
                    h = mid - 1;
               }
          }
          else if(arr[mid] < x){
               l = mid + 1;
          }
          else{
               h = mid - 1;
          }
     }

     printf("The first occurance of %d is :  %d ",x, idx);

     return 0;
}
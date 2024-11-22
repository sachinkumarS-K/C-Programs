#include<stdio.h>

int findPeakElement(int n , int arr[n]){
     int l = 0, h = n - 1;
     int mid = l + (h - l) / 2;
     printf("%d ", mid);
     while (l<h)
     {

          if(arr[mid] < arr[mid +1]){
               l = mid + 1;
          }
          else{
               h = mid;
          }
          mid = l + (h - l) / 2;
     }
     return arr[l];
}

void main(){
     int arr[] = {3, 5, 3, 2, 0};
     int n = sizeof(arr) / sizeof(arr[0]);

     int peakElement = findPeakElement(n, arr);
     printf("Peak element of an Array :  %d", peakElement);
}
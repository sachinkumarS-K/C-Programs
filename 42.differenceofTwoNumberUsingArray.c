#include <stdio.h>

int main(){
     int arr[] = {9, 5, 1, 6};
     int brr[] = {6, 2, 5};
     int n1 = sizeof(arr) / sizeof(arr[0]);
     int n2 = sizeof(brr) / sizeof(brr[0]);
     int n3 = n1 > n2 ? n1 : n2;
     int crr[n3];
     int b = 0;
     for (int i = 0; i < n3; i++)
     {
          int d1 = i < n1 ? arr[n1 - 1 - i] : 0;
          int d2 = i < n2 ? brr[n2 - 1 - i] : 0;
          d1 = d1 - b;
          if(d2>d1){
               d1 = 10 + d1;
               b = 1;
          }
          int diff = d1 - d2 ;
          crr[n3 - i-1] = diff;
     }
     for (int i = 0; i < n3; i++){
          printf("%d  ", crr[i]);
     }

     return 0;
}

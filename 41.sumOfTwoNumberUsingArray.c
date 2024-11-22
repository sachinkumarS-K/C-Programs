#include<stdio.h>

int main(){

     int arr[] = {0,9,0,0,3,5};
     int brr[] = {2, 2, 7};
     int n1 = sizeof(arr) / sizeof(arr[0]);
     int n2 = sizeof(brr) / sizeof(brr[0]);
     int n3 = n1 > n2 ? n1 : n2 ;
     int crr[n3+1];
     int c = 0;
     for (int i = 0; i <n3; i++){
          int d1 = i < n1 ? arr[n1 - 1 - i] : 0;
          int d2 = i < n2 ? brr[n2 - 1 - i] : 0;

          int sum = d1+d2 + c;
          crr[n3 - i] = sum % 10;
          c = sum / 10;
     }
     crr[0] = c;
     for (int i = 0; i <= n3; i++){

          // if(crr[0] == 0)
          //      continue;
          printf("%d  ", crr[i]);
     }

          return 0;
}


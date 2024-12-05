#include<stdio.h>

int findElement(int r , int c ,int arr[r][c] , int x){
     int l = 0, h = r * c - 1;
     while (l<=h)
     {
          int m = l + (h - l) / 2;
          int rowIdx = m / c;
          int colIdx = m % c;
          if(arr[rowIdx][colIdx] == x){
               printf("Element found at Index %d %d", rowIdx, colIdx);
               return 1;
          }
          else if(arr[rowIdx][colIdx] < x){
               l = m + 1;
          }
          else{
               h = m - 1;
          }
     }
     return 0;
}

int main(){
     int arr[4][5] = {
         {1, 2, 3, 4, 5},
         {6, 7, 8, 9, 10},
         {11, 12, 13, 14, 15},
         {16, 17, 18, 19, 20}};

     int found = findElement(4, 5, arr , 20);
     if(!found)
          printf("Element not found");

     return 0;
}
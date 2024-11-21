#include<stdio.h>

int main(){
     int arr[][4] = {
         {1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12},
         {13, 14, 15, 16}};

     int row = sizeof(arr) / sizeof(arr[0]);
     int col = sizeof(arr[0]) / sizeof(arr[0][0]);
     int count = 0;
     int startRow = 0, endRow = row - 1, startCol = 0, endCol = col - 1;

     while(count<row*col){
          for (int i = startCol; i <= endCol && count<row*col; i++){
               printf("%d ", arr[startRow][i]);
               count++;
          }
          startRow++;
          for (int i = startRow; i <= endRow && count < row * col; i++)
          {
               // printf("heelo %d %d\n", i, endRow);
               printf("%d ", arr[i][endRow]);
               count++;
          }
          endCol--;
          for (int i = endCol; i >= startCol && count < row * col; i--)
          {
               printf("%d ", arr[endRow][i]);
               count++;
          }
          endRow--;
          for (int i = endRow; i >= startRow && count < row * col; i--)
          {
               printf("%d ", arr[i][startCol]);
               count++;
          }
          startCol++;
     }
     return 0;
}
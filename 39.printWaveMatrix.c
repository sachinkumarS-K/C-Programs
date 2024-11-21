#include<stdio.h>

int main(){

     int arr[][4] = {
         {1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12},
         {13, 14, 15, 16},
         {17, 18, 19, 20}};

     int row = sizeof(arr) / sizeof(arr[0]);
     int col = sizeof(arr[0]) / sizeof(arr[0][0]);

     for (int i = 0; i < col; i++){

          if((i&1) == 0){
               for (int j = 0; j < row; j++)
                    printf("%d ", arr[j][i]);
          }
          else{
               for (int j = row-1; j >=0; j--)
                    printf("%d ", arr[j][i]);
          }
     }
          return 0;
}
#include<stdio.h>

int main(){

     int arr[] = {1, 8, 11, 4, 1, 9, 2, 4, 3, 1, 8, 9, 3, 2, 8};
     int n = sizeof(arr) / sizeof(arr[0]);
     int pos[n];
     for (int i = 0; i < n; i++) {
        pos[i] = 0;
    }
     for (int i = 0; i < n; i++){
          if(pos[i])     continue;

          int indices[n];
          int c = 0;
          for (int j = i + 1; j < n; j++){
               if(arr[i] == arr[j]){
                    indices[c++] = j;
                    pos[j] = 1;
               }
          }
          if(c>0){
               printf("Duplicate element: %d\t", arr[i]);
               printf("Indices: %d ", i);
               for (int k = 0; k < c; k++) {
                    printf("%d ", indices[k]);
               }
               printf("\n");
          }
     }

          return 0;
}
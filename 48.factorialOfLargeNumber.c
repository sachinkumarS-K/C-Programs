#include<stdio.h>

int main(){
     int n;
     printf("Enter any number\t");
     scanf("%d", &n);
     int ans[200], c = 0;
     int carry = 0;
     ans[c++] = 1;
     for (int i = 2; i <= n; i++){
          for (int j = 0; j < c; j++){
               int x = ans[j] * i + carry;
               ans[j] = x % 10;
               carry = x / 10;
          }
          while(carry){
               ans[c++] = carry % 10;
               carry /= 10;
          }
     }
     printf("Factorial of %d is : ", n );
     for (int i = c-1; i >= 0; i--){
          printf("%d", ans[i]);
     }

          return 0;
}
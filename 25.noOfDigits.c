#include<stdio.h>

int main(){

      int num , digits=0;
     printf("Enter any number  ");
     scanf("%d", &num);

     while(num){
          digits++;
          num /= 10;
     }
     printf("Digits =  %d", digits);

     return 0;
}
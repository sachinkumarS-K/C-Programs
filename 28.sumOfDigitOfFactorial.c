#include<stdio.h>

int main(){

     int num,fact = 1,sum = 0;
     printf("Enter any number  ");
     scanf("%d", &num);
     for (int i = num; i > 1;i--)
          fact *= i;
     while(fact){
          sum += fact % 10;
          fact /= 10;
     }
     printf("Sum of digits  %d" , sum);

     return 0;
}
#include<stdio.h>

int calculatePower(int n , int p){
     if(p == 1)
          return n;
     else
          return n * calculatePower(n, p - 1);
}

int main(){

     int num , digits=0,sum = 0;
     printf("Enter any number  ");
     scanf("%d", &num);
     int temp = num;

     while(temp){
          digits++;
          temp /= 10;
     }
     temp = num;

     while(temp){
          int rem = temp % 10;
          sum += calculatePower(rem, digits);
          temp /= 10;
     }
     if(sum == num)
          printf("Narcissistic Number");
     else
          printf("Not a Narcissistic Number");

     return 0;
}
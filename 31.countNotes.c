#include<stdio.h>

int main(){
     int amount;
     printf("Enter the amount\t");
     scanf("%d", &amount);

     printf("Currency needed:\n");
     printf("500 Rs: %d\n", amount / 500);
     amount %= 500;
     printf("200 Rs: %d\n", amount / 200);
     amount %= 200;
     printf("100 Rs: %d\n", amount / 100);
     amount %= 100;
     printf("50 Rs: %d\n", amount / 50);
     amount %= 50;
     printf("20 Rs: %d\n", amount / 20);
     amount %= 20;
     printf("10 Rs: %d\n", amount / 10);
     amount %= 10;
     printf("5 Rs: %d\n", amount / 5);
     amount %= 5;
     printf("2 Rs: %d\n", amount / 2);
     amount %= 2;
     printf("1 Rs: %d\n", amount);

     return 0;
}
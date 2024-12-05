#include<stdio.h>
void printBinary(int n){
     if(n==0)
          return;
     printBinary(n / 2);
     printf("%d", n % 2);
}

int main(){

     printBinary(25);
     return 0;
}
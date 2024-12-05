#include<stdio.h>

void reverse(char str[],int n){
     if(n <0)
          return;
     printf("%c", str[n]);
     reverse(str, n - 1);

}

int main(){
     char str[] = "Sachin";

     int n = sizeof(str) / sizeof(str[0])-2;
     reverse(str, n);
     return 0;
}
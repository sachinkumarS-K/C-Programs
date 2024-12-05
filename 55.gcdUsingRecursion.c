#include<stdio.h>

int findHcf(int x , int y){
    if(x == y){
         return x;
    }
    else if(x>y){
       return findHcf(x-y,y);
    }
    else{
         return findHcf(x, y - x);
    }
}

int main(){

     int x,y;
     printf("Enter any two number\t");
     scanf("%d %d", &x,&y);
     printf("GCD of the Number is : %d", findHcf(x,y));
     return 0;
}
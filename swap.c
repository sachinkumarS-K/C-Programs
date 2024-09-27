#include<stdio.h>

void main(){

    int a,b , t ;
    printf("Enter the value of two variables\t");
    scanf("%d %d",&a,&b);
    t = a ;
    a = b ;
    b = t ;
    printf("A = %d \n B = %d " , a,b);
}
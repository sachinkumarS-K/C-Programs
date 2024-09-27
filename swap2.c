#include<stdio.h>

void main(){

    int a,b , t ;
    printf("Enter the value of two variables\t");
    scanf("%d %d",&a,&b);
    a = a+b ;
    b = a-b ;
    a = a-b ;
    printf("A = %d \n B = %d " , a,b);
}
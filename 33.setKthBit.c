#include<stdio.h>

int main(){
     int num, index;
     printf("Enter the number\t");
     scanf("%d", &num);
     printf("Enter the position of the Bit to be set \t");
     scanf("%d", &index);
     int num2 = num ^ (1 << index - 1);
     printf("Number after setting the Bit  %d", num2);
     return 0;
}
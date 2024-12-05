#include<stdio.h>

int findLength(char str[]){
     int n = 0;
     for (n = 0; str[n]; n++);

     if (str[n - 1] == '\n'){
          str[n - 1] = '\0';
          n--;
     }

     return n;
}

void main(){
     char str[20];
     printf("Enter any string\t");
     fgets(str, 20, stdin);

     printf("The lenght of string is  %d\n", findLength(str));

}
#include<stdio.h>

int findLength(char str[]){
     if(str[0] == '\0')
          return 0;
     else
          return 1 + findLength(str + 1);
}

int main(){
     char str[] = "sachin";
     printf("Length is :  %d", findLength(str));
     return 0;
}
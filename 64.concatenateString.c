#include<stdio.h>

void main(){
     char str[20] , str1[20];
     printf("Enter any string\t");
     fgets(str, 20, stdin);
     printf("Enter another string\t");
     fgets(str1, 20, stdin);
     int n = 0;
     for (n = 0; str[n]; n++);

     if (str[n - 1] == '\n'){
          str[n - 1] = '\0';
          n--;
     }
     int n1;
     for (n1 = 0; str1[n1]; n1++);

     if (str1[n1 - 1] == '\n'){
          str1[n1 - 1] = '\0';
          n1--;
     }
     for (int i = 0; i < n1; i++){
          str[n++] = str1[i];
     }
     str[n] = '\0';

     printf("%s", str);
}
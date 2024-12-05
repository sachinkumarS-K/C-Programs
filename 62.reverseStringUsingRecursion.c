#include<stdio.h>

void reverse(char str[] , int s , int e){
     if(s>=e)
          return;
     char temp = str[s];
     str[s] = str[e];
     str[e] = temp;

     reverse(str, s + 1, e - 1);
}

void main(){
     char str[20];
     printf("Enter any string\t");
     fgets(str, 20, stdin);
     int n = 0;
     for (n = 0; str[n]; n++);

     if (str[n - 1] == '\n'){
          str[n - 1] = '\0';
          n--;
     }
     printf("The original string is  %s\n", str);
     reverse(str , 0,n-1);
     printf("The reversed string is  %s\n", str);

}
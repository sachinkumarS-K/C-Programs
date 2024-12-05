#include<stdio.h>

int checkPalindrome(char str[] , int s , int e){
     if (s >= e)
          return 1;
     if (str[s] != str[e])
          return 0;
     return checkPalindrome(str, s + 1, e - 1);
}

    void main(){
     char str[20];
     printf("Enter any string\t");
     fgets(str, 20, stdin);
     int n = 0;
     for ( n = 0; str[n]; n++);

     if(str[n-1] == '\n'){
          str[n - 1] = '\0';
          n--;
     }

     if (checkPalindrome(str, 0, n - 1)){
          printf("The string is Palindrome");
     }
     else{
          printf("The string is not palindrome");
     }
}
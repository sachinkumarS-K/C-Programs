#include<stdio.h>

int sumOfDigit(int n){
     if(n == 0)
          return 0;
     else
          return n % 10 + sumOfDigit(n / 10);
}

    int
    main()
{

     int n;
     printf("Enter any number\t");
     scanf("%d", &n);
     printf("Sum of the digit is : %d", sumOfDigit(n));
     return 0;
}
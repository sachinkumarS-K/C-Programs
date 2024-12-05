#include<stdio.h>

float solve(int divedend , int divisor){

     int isNegetive = 1;
     if ((divedend < 0 && divisor < 0) || (divedend > 0 && divisor > 0))
          isNegetive = 0;
     if (divedend < 0)
          divedend = -divedend;
     if(divisor < 0)
          divisor = -divisor;
     int l = 0, h = divedend;
     float ans = 0;
     while (l<=h){
          int m = l + (h - l) / 2;
          if(m*divisor == divedend){
               ans = m;
               break;
          }
          else if(m*divisor < divedend){
               ans = m;
               l = m + 1;
          }
          else{
               h = m - 1;
          }
     }
     float increment = 0.1;
     for (int i = 0; i < 3; i++){
          while (ans * divisor <= divedend)
          {
               ans += increment;
          }
          ans -= increment;
          increment /= 10;
     }
          return isNegetive ? -ans : ans;
}

int main(){
     int dividend, divisior;
     printf("Enter the numbers\t");
     scanf("%d%d", &dividend, &divisior);
     float ans = solve(dividend, divisior);
     printf("The ans is :  %f", ans);
     return 0;
}
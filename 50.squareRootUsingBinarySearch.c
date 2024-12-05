#include<stdio.h>

float findRoot(int n){
     int l = 0, h = n / 2;
     int precision = 4;
     float ans = -1;
     while (l<=h){
          int mid = l + (h - l) / 2;
          if(mid*mid > n){
               h = mid - 1;
          }
          else if(mid*mid == n){
               ans = mid;
               break;
          }
          else{
               ans = mid;
               l = mid + 1;
          }
     }
     printf("%f ", ans);
     float increment = 0.1;
     for (int i = 0; i < precision; i++){
          while(ans*ans <=n){
               ans += increment;
          }
          ans -= increment;
          increment /= 10;
     }

     return ans;
}

int main(){

     float n;
     printf("Enter the element \t");
     scanf("%f", &n);
     float sqRoot = findRoot(n);
     printf("The square root of  %.1f is %.4f", n, sqRoot);
     return 0;
}
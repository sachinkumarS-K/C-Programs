#include<stdio.h>
#include<conio.h>
void main(){
	 clrscr();
	 int s1=10 , s2=5 , s3 = 3 ;
	 //Rectangle
	 printf("Area of rectangle = %d \n",s1*s2);
	 printf("Perimeter of rectangle = %d\n" , 2*(s1+s2));
	 //Square
	 printf("Area of square = %d\n" , s1*s1);
	 printf("Perimeter of square = %d \n",4*s1);
	 //Circle
	 printf("Area of circle = %d \n " , (3.14*s1*s1));
	 printf("Perimeter of circle = %d \n" , 2*3.14*s1);
	 //Triangle
	 printf("Area of trinagle = %d\n" , (s1*s2)/2);
	 printf("Perimeter of triangle = %d\n" , s1+s2+s2);


	   getch();

 getch();
}

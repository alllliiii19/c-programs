//sum of three digits of a number 
#include<stdio.h>
#include<math.h>
 int main()
 {
 	float a,b,c,s,area,x,y,z;
 	printf("Enter the three sides of trinagle ");
 	scanf("%f %f %f",&a,&b,&c);
 	s=(a+b+c)/2.0;
 	x=(s-a);
 	y=(s-b);
 	z=(s-c);
 	area=sqrt(s*x*y*z);
 	printf("The area of the trinagle is %f",area);
 	return 0;
 }

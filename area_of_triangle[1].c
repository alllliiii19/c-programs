//area of triangle using base and altitude 
#include<stdio.h>
 int main()
 {
 	float b,al,ar;
 	
 	printf("Enter the base of the trinagle \t");
 	scanf("%f",&b);
 	printf("Enter the altitude of the trinagle\t");
 	scanf("%f",&al);
 	
 	ar=b*al*0.5;
 	printf("The area of the triangle is %f",ar);
 	return 0;
 }
 

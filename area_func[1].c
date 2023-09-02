#include<stdio.h>
 float area(float,float);
 int main()
 {
 	float b,h,a;
 	printf("enter a base and height");
 	scanf("%f%f",&b,&h);
 	a=area(b,h);
 	printf("%f is the area of the triangle",a);
 }
 float area(float h,float b)
 {
 	float area;
 	area=0.5*b*h;
 	return area;
 }

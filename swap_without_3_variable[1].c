#include<stdio.h>
 int main()
 {
 	
 	float a,b;
 	
 	printf("Enter first number");
 	scanf("%f",&a);
 	printf("Enter second number");
 	scanf("%f",&b);
 	a=b+a;
 	b=a-b;
 	a=a-b;
 	printf("a = %f and b = %f",a,b);
 	return 0;
 }

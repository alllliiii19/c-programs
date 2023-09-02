#include<stdio.h>
 float add(float,float);
 float sub(float,float);
 float mul(float,float);
 float div(float,float);
 float exit(float,float);
 int main()
 {
 	int n;
 	printf("1 add \n 2 sub \n 3 multiply \n 4 division \n 5 exit \n ENTER YOUR CHOICE");
 	scanf("%d",&n);
 	float a,x,y;
 	if(n != 5)
 			printf("enter the numbers");
 			scanf("%f%f",&x,&y);
 			switch(n)
 			{
 				case 1:
 							a=add(x,y);
 							printf("%f",a);
 							break;
 				case 2:
 						 a=sub(x,y);
 							printf("%f",a);
 							break;
					case 3:
 							a=mul(x,y);
 							printf("%f",a);
 							break;
					case 4:
 						 a=div(x,y);
 							printf("%f",a);
 							break;
		  }
			 																	
 }
 
 
 
 
 
 
 
 
 
 
 float add(float x,float y)
 {
 	float s=x+y;
 	return s;
 }
 float sub(float x,float y)
 {
 	float s=x-y;
 	return s;
 }
 float mul(float x,float y)
 {
 	float s=x*y;
 	return s;
 }
 float div(float x,float y)
 {
 	float s=x/y;
 	return s;
 }
 											
 											
 											
 															
 
 

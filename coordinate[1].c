#include<stdio.h>
 int main()
 {
 	int q;
 	float x,y;
 	printf("Enter x coorcinate =");
 	scanf("%f",&x);
 	printf("Enter y coorcinate =");
 	scanf("%f",&y);
 	if(x>0 && y>0)
 	 q=1;
 	else if(x<0 && y<0)
 	 q=3;
 	else if(x<0 && y>0)
 	 q=2;
 	else if(x>0 && y<0)
 	 q=4;
 	else if(x==0 && y==0)
 	 printf("point lies on origin"); 
 	else if (x>0 || x<0 && y==0)
 	 printf("point lies on x axis");
    else if (y>0 || y<0 && x==0)
 	 printf("point lies on x axis");
	
	if(q==1 || q==2 || q==3 || q==4) 
	printf("THE QUADERANT IS %d",q);
}

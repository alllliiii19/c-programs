#include<Stdio.h>
 void palin(int);
 int main()
 {
 	int a;
 	printf("Enter the number");
 	scanf("%d",&a);
 	palin(a);
 }
 void palin(int a)
 	{
 		int b,c,d1,d2,d3,d4,s;
 	d1=a/1000;
 	b=a/10;
 	c=b/10;
 	d4=a%10;
 	d3=b%10;
 	d2=c%10;
 	s=d4*1000+d3*100+d2*10+d1;
 	printf("The reverse of the number is %d",s);
 	 if 
	   (a==s)
	   printf("\nThe number is palindrome");
	  else
	   printf("\nThe number is not a palindrome"); 
 	}

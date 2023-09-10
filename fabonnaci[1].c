#include<stdio.h>
 void fab(int);
	int main()
{
	int x;
	printf("how many numbers in series\n ");
	scanf("%d",&x);
	fab(x);
}
void fab(int x)
	{
	 int n1=0,n2=1,n3;
	 printf("fabonnaci series\n");
	 printf("%d\n%d\n",n1,n2);
	 int i;
	 for(i=3;i<=x;i++)
	 {
	 		n3=n1+n2;
	 			printf("%d \n",n3);
	 		n1=n2;
	 		n2=n3;
	 }
	}

//Find product of series: 1 2 3 4 5 .... n
#include<stdio.h>

int main()
{
int n;
printf("Write a number:");
scanf("%d",&n);
int prod=1;
for(int i=1;i<=n;i++) {
prod *=i;
}
printf("The product is %d",prod);

}

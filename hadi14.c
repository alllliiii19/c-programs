//Find sum of series: 1 3 5 7 .... n
#include<stdio.h>
int main()
{
int n;
printf("Write a number:");
scanf("%d",&n);
int sum=0;
for(int i=1;i<=n;i=i+2) {
sum+=i;
}
printf("The sum is %d",sum);
}

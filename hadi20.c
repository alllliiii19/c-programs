//. Display the Fibonacci series: 1 1 2 3 5 8 13 21 ....... (n terms)

#include<stdio.h>

int main() {

int n;
printf("Write a number:");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
for(int j=1;j<=5;j++)
{
printf("%d\t",j);
}
printf("\t");
}
return 0;
}

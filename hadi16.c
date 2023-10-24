//Display the series: 2 4 16 256 65536 ....... (n terms)

#include<stdio.h>

int main()
{
int n;
int term=2;
printf("Write a number:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("%d\t",term);
term=term*term;
}
return 0;
}

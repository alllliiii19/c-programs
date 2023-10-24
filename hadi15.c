//Check whether a number is prime or not

#include<stdio.h>

int main()
{
int n;
printf("Write a number:");
scanf("%d",&n);
if(n%2!=0)
{
printf("It is a prime number");
}
if(n%2==0)
{
printf("Not a prime number");
}
return 0;
}

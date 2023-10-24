#include<stdio.h>

int factorial(int n);

int main()
{
int n;
int fact;
printf("Write the number:1");
scanf("%d",&n);
fact=factorial(n);

printf("factorial of %d is %d",n,fact);

return 1;
}
int factorial(int n)
{
if(n==1 || n==0)
{
    return 1;
}
else
{
return n*factorial(n-1);
}


}

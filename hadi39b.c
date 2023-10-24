#include<stdio.h>

int fibonacci(int n);

int main()
{

int n,fib;
printf("Write the number:");
scanf("%d",&n);
for(int i=0;i<=n;i++)
{
printf("%d\n",fibonacci(i));

}

return 1;
}
int fibonacci(int n)
{

if(n==1 || n==0)
{
return 1;
}
else
{
return fibonacci(n-2)+fibonacci(n-1);

}

}

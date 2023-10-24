#include<stdio.h>

int print(int n);

int main()
{
int n;
int print_no;
printf("Write the number:");
scanf("%d",&n);
print_no=print(n);

printf("%d\n",n);


return 0;
}
int print(int n)
{
if(n)
{
print(n-1);
}
else
{
return 1;
}
}




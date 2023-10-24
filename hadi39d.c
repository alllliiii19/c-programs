#include<stdio.h>

int print(int n);

int main()
{
int n=100;
int print_no;
print_no=print(n);
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
printf("%d\n",n);

}




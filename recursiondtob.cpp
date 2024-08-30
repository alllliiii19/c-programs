#include<stdio.h>
void binary(int num);
int main()
{
	int num=8;
	binary(num);
}
void binary(int num)
{
	int s;
	if(num==0)
	{
		printf("0");
	}
	else
	{
		s=num%2;
		binary(num/2);
		printf("%d",s);
	}
}

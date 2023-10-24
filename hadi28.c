#include<stdio.h>

int main()
{
int number[10];
for(int i=0;i<10;i++) {
printf("Write a number:");
scanf("%d",&number[i]);
}
for(int i=0;i<10;i++) {
printf("The number at index %d is %d\n",i,number[i]);
}
return 0;
}

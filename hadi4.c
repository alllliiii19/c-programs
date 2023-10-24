//Compare two numbers

#include<stdio.h>

int main() {
int a,b;
printf("Write a number:");
scanf("%d",&a);
printf("Write the number:");
scanf("%d",&b);

if(a>b)
printf("%d is greater than %d",a,b);
if(a==b)
printf("%d is equal to %d",a,b);
if(b>a)
printf("%d is not greater than %d",a,b);
}

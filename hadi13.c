//Find factorial of a number n

#include<stdio.h>

int main() {
int n;
printf("Write a number:");
scanf("%d",&n);
int prod=1;
for(int i=1;i<=n;i++) {
prod *=i;
}
printf("The factorial %d! = %d",n,prod);

}

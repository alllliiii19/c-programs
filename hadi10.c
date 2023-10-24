//Display series: 1 2 3 4 5 .... n

#include<stdio.h>

int main() {
int n;
printf("write a number:");
scanf("%d",&n);

for(int i=1;i<=n;i++) {
printf("%d\t",i);
}
}

//Display the series: 2 4 8 16 32 64 128 ....... (n terms)
#include<stdio.h>

int main() {

int n;
int term=1;
printf("Write a number:");
scanf("%d",&n);

for(int i=1;i<=n;i++) {
term=term*2;
printf("%d\t",term);
}
return 0;
}

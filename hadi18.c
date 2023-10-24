//Display the series: 1 2 2 3 3 3 4 4 4 4 ..... (up to n)

#include<stdio.h>

int main() {

int n;
printf("Write a number:");
scanf("%d",&n);

for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=i;j++)
     {
      printf("%d",i);
}
printf("\t");
}
return 0;
}

#include<stdio.h>
int main() {
    int i,n,x=0;
    printf("Write the number: ");
    scanf("%d",&n);
    
    for(i=2;i<=n;i++) {
            if(n%i==0)
            {
               x++;
            }
    }
    if(x==1)
    printf("%d is prime",n);
    else
    printf("%d is not prime",n);
}
#include<stdio.h>

int fibonacci(int n) {
    if(n<=0) 
    {
    return n;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int n;
    printf("The series is:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        printf("\t%d",fibonacci(i));
    }
    return 0;
}
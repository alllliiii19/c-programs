#include<stdio.h>

int fabonacci(int n) {


if(n<=1) {
    return n;
}else{
    return fibonacci(n-1)  + fibonacci(n-2);
}
}
int main() {

int b;
printf("Write the number");
scanf("%d",&b);

for(int i=1;i<=b;i++) {
    printf("%d",fibonacci(i));
}
return 0;
}





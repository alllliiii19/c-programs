#include<stdio.h>

int main() {
    int number_1,number_2,sum;

    printf("Enter first Number :");
    scanf("%d",&number_1);
    printf("Enter Second Number :");
    scanf("%d",&number_2);
    sum=number_1+number_2;
    printf("%d + %d = %d",number_1,number_2,sum);
}
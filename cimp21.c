#include<stdio.h>

int main() {
    int n;

    printf("write no:");
    scanf("%d",&n);

    for(int i=n;i>=1;i--) {
        printf("%d\t",i);
    }
}
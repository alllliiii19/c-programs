#include<stdio.h>

int main() {
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the terms:%d",n);
    
    for(int i=0;i<n;i++) {
        scanf("%d",arr[i]);
    }
    for(int i=0;i<n;i++) {
        printf("/nThe element of array will be %d",arr[i]);
    }
    return 0;
}
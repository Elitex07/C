#include <stdio.h>
#include <conio.h>

void main(){
    int a[100], b[100], c[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the 1st array: ");
    
    a[n], b[n], c[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("Enter the elements of the 2nd array: ");
    for(i=0;i<n;i++){
        scanf("%d", &b[i]);
    }

    for(i=0;i<n;i++){
        c[i] = a[i] + b[i];
    }

    printf("Array of sum of corresponding elements is: ");
    for(i=0;i<n;i++){
        printf("%d ", c[i]);
    }
}
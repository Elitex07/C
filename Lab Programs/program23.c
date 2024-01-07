#include <stdio.h>
#include <conio.h>

void main(){
    int ar[100], s, i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ar[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    s = 0;
    for(i=0; i<n;i++){
        s = s + ar[i];
    }

    printf("Sum of all elements in the array is %d", s);
}
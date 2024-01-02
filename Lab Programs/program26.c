#include <stdio.h>
#include <conio.h>

void main(){
    int a[100], n, i, min, max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    a[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    min = a[0];
    max= a[0];
    for(i=1;i<n;i++){
        if(min > a[i]) min = a[i];
        if (max < a[i]) max = a[i];
    }

    printf("Maximum element is %d", max);
    printf("\nMinimum element is %d", min);
}
#include <stdio.h>
#include <conio.h>

void main(){
    int ar[25], i, j, n, ele;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    for(i=0;i<n-1;i++){
        ele = ar[i+1];
        for(j=i;j>=0;j--){
            if(ele < ar[j]){
                ar[j+1] = ar[j];
                ar[j] = ele;
            }
        }

    }

    printf("Sorted array is given by: ");
    for(i = 0; i<n; i++){
        printf("%d ", ar[i]);
    }
}
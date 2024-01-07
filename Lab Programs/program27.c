#include <stdio.h>
#include <conio.h>

void main(){
    int ar[25], i, j, n, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(ar[j] > ar[j+1]){
                temp = ar[j+1];
                ar[j + 1] = ar[j];
                ar[j] = temp;
            }
        }
    }

    printf("Sorted array is given by: ");
    for(i = 0; i<n; i++){
        printf("%d ", ar[i]);
    }
}
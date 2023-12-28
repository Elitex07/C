#include <stdio.h>
#include <conio.h>

void main(){
    int ar[25], i, n, min, k, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    for(k=0; k < n - 1; k++){
        min = ar[k];
        temp = k;
        for(i=k+1; i<n; i++){
            if(ar[i] < min){
                min = ar[i];
                temp = i;
            }
        }
        printf("Min Element in %d process is %d\n", k, min);
        for(i=temp;i>k;i--){
            ar[i] = ar[i - 1];
        }
        ar[k] = min;
    }

    printf("Sorted array is given by: ");
    for(i = 0; i<n; i++){
        printf("%d ", ar[i]);
    }
}
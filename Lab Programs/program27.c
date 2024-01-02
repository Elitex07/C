#include <stdio.h>
#include <conio.h>

void main(){
    int ar[100], n, i, ele, r;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ar[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &ele);

    r = -1;
    for(i=0;i<n;i++){
        if(ar[i] == ele){ 
            r = i;
            break;
        }
    }

    if(r == -1) printf("Element is not present in the array.");
    else printf("Element is present at index %d in the array", r);
}
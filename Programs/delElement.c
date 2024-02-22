#include <stdio.h>

void main(){
    int n, p;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: ");
    for(int i = 0; i<n; i++) scanf("%d", &arr[i]);

    printf("Enter the index of the element to be deleted: ");
    scanf("%d", &p);
    for(int i = p; i<n; i++) arr[i] = arr[i+1];
}
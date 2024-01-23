#include <stdio.h>
#include <conio.h>

void reverse(int *ptr1, int *ptr2);

void main(){
    int a, b, *ptr1, *ptr2;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;

    reverse(ptr1, ptr2);

    printf("After reversing the values of a and b are: %d and %d", a, b);
    getch();
}

void reverse(int *ptr1, int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
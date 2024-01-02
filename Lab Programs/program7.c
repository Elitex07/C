#include <stdio.h>
#include <conio.h>

void main(){
    int a, b, c;
    printf("Enter 2 different numbers, a and b: ");
    scanf("%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("Value of a is %d and value of b is %d", a, b);
    getch();
}
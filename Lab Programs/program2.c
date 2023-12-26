#include <stdio.h>
#include <conio.h>

void main(){
    int x, y, a, s, m, d;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter another number: ");
    scanf("%d", &y);
    a = x + y;
    s = x - y;
    m = x * y;
    d = x / y;

    printf("Addition of %d and %d is %d\nSubtraction of %d and %d is %d\nMultiplication of %d and %d is %d\nDivision of %d and %d is %d", x, y, a, x, y, s, x, y, m, x, y, d);
    getch();
}
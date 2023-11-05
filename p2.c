#include <stdio.h>
#include <conio.h>

int main(){
    int x, y, a, s, m, d;
    // clrsrc();
    printf("Enter a Number: ");
    scanf("%d", &x);
    printf("Enter another Number: ");
    scanf("%d", &y);

    a = x + y;
    s = x - y;
    m = x * y;
    d = x/y;

    printf("Addition of %d and %d is %d \nSubtraction of %d and %d is %d \nMultiplication of %d and %d is %d \nDivision of %d by %d is %d", x, y, a, x, y, s, x, y, m, x, y, d);
    getch();
}
#include <stdio.h>
#include <conio.h>

void main(){
    int a, b, o;
    printf("Enter the operation (+, -, *, /): ");
    scanf("%c", &o);
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    switch (o)
    {
        case '+':
            printf("Addition of %d and %d is %d", a, b, a+b);
            break;
        case '-':
            printf("Subtraction of %d and %d is %d", a, b, a-b);
            break;
        case '*':
            printf("Multiplication of %d and %d is %d", a, b, a*b);
            break;
        case '/':
            printf("Division of %d and %d is %d", a, b, a/b);
            break;
        default:
            printf("Invalid Operator");
    }
}
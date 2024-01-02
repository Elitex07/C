#include <stdio.h>
#include <conio.h>

void main(){
    int x, y;
    char op;
    printf("Enter the operation (+,-,*,/): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%d%d", &x, &y);
    switch (op)
    {
    case '+':
        printf("Addition of %d and %d will be %d", x, y, x+y);
        break;
    case '-':
        printf("Subtraction of %d and %d will be %d", x, y, x-y);
        break;
    case '*':
        printf("Multiplication of %d and %d will be %d", x, y, x*y);
        break;
    case '/':
        printf("Division of %d and %d will be %d", x, y, x/y);
        break;
    default:
        printf("Invalid Operator");
        break;
    }
    getch();
}
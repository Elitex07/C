#include <stdio.h>
#include <conio.h>

void main(){
    float c, f;
    printf("Enter temperature (in C): ");
    scanf("%f", &c);

    f=((9*c)/5) + 32;
    printf("Temperature in fahrenhiet is %.2f", f);
    getch();
}
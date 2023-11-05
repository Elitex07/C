#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    float principal, rate, time, times, simpleInterest, compoundInterest;
    // clrsrc();

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter the number of times interest will be compounded: ");
    scanf("%f", &times);

    simpleInterest = (principal * rate * time) / 100;
    compoundInterest = principal * pow((1 + (rate /(times * 100))), times * time) - principal;

    printf("Simple Interest: %.2f", simpleInterest);
    printf("\nCompound Interest: %.2f", compoundInterest);
    getch();
}
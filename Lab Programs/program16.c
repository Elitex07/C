#include <stdio.h>
#include <conio.h>

void main(){
    int n, f, i;
    printf("Enter any number: ");
    scanf("%d", &n);
    f = 1;
    for(i = 1; i <= n; i++){
        f *= i;
    }
    printf("Factorial of number %d is %d", n, f);
}
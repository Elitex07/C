#include <stdio.h>
#include <conio.h>

void main(){
    int n, i, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    r = 0;
    for (i = 2; i < n; i++)
    {
        if(n % i == 0) {
            r = 1;
            break;
        }
    }
    if(r == 1) printf("Given number is not a prime number.");
    else printf("Given number is a prime number.");
}
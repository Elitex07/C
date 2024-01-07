#include <stdio.h>
#include <conio.h>

void main(){
    int n, r, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    r = 0;
    for (i = 1; i <= n; i++)
    {
        r = r + i;
    }
    printf("Sum of all numbers upto the number %d is %d", n, r);
}
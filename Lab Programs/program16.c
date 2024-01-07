#include <stdio.h>
#include <conio.h>

void main(){
    int n, r, r2, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    r = 0;
    r2 = 0;
    for (i = 1; i <= n; i++)
    {
        if(i % 2 == 0) r = r + i;
        else r2 = r2 + i;
    }
    printf("Sum of all even numbers upto the number %d is %d\n", n, r);
    printf("Sum of all odd numbers upto the number %d is %d", n, r2);
}
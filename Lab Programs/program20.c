#include <stdio.h>
#include <conio.h>

void main(){
    int n, s, r, t;
    printf("Enter a number: ");
    scanf("%d", &n);
    s = 0;
    for(;n != 0;){
        r = n % 10;
        s = s*10 + r;
        n /= 10;
    }
    printf("Sum of digits is %d", s);
}
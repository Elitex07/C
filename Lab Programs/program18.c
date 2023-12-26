#include <stdio.h>
#include <conio.h>

void main(){
    int n, a, b, c, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a = 0;
    b = 1;
    printf("%d\n%d\n", a, b);
    for(i = 1; i <= n-2; i++){
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
}
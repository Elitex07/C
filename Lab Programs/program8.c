#include <stdio.h>
#include <conio.h>

void main(){
    int x, y;
    printf("Enter any two numbers: ");
    scanf("%d%d", &x, &y);
    if(x==y) printf("Provided numbers are equal.");
    else printf("Provided numbers are different.");
    getch();
}
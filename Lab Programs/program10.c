#include <stdio.h>
#include <conio.h>

void main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x%2 == 0) printf("Given number is even.");
    else printf("Given number is odd.");
    getch();
}
#include <stdio.h>
#include <conio.h>

void main(){
    int x, y, z;
    printf("Enter any three numbers: ");
    scanf("%d%d%d", &x, &y, &z);
    if(x<y){
        if(x<z){
            printf("%d is the smallest number", x);
        } else {
            printf("%d is the smallest number", y);
        }
    } else {
        if(y<z){
            printf("%d is the smallest number", y);
        } else {
            printf("%d is the smallest number", z);
        }
    }
    getch();
}
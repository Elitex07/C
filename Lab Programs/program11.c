#include <stdio.h>
#include <conio.h>

void main(){
    int y;
    printf("Enter the year: ");
    scanf("%d", &y);
    if(y%4==0 && y%100!=0){
        printf("Given year is a loop year.");
    } else printf("Given year is not a loop year.");
    getch();
}
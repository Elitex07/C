#include <stdio.h>
#include <conio.h>

void main(){
    int r;
    float a,c ;
    printf("Enter radius of the circle: ");
    scanf("%d", &r);
    a = 3.14 * r * r;
    c = 2 * 3.14 * r;
    printf("Area of the circle is %f", a);
    printf("\nCircumference of the circle is: %f", c);
    getch();
}
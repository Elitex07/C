#include <stdio.h>
#include <conio.h>

void main(){
    int s1, s2, s3, s4, s5, t;
    float p;
    printf("Enter marks of all 5 subjects: ");
    scanf("%d%d%d%d%d", &s1, &s2,&s3, &s4, &s5);
    t= s1 + s2 + s3 + s4 + s5;
    p = t/5;
    printf("Total marks: %d\nPercentage: %.2f",t,p);
    getch();
}
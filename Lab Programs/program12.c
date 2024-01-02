#include <stdio.h>
#include <conio.h>

void main(){
    int s1, s2, s3, s4, s5, t, mm;
    float p;
    printf("Enter the marks of five subjects: ");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    printf("Enter maximum marks: ");
    scanf("%d", &mm);
    t=s1+s2+s3+s4+s5;
    mm=mm*5;
    p=(t*100)/mm;

    if(p > 90) printf("Grade: A");
    else if(p > 80) printf("Grade: B");
    else if(p > 70) printf("Grade: C");
    else printf("Grade: D");
}
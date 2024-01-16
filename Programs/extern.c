#include <stdio.h>

int a=20;
void main(){
    extern int a;
    printf("%d", a);
}
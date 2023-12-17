#include <stdio.h>
#include <conio.h>

int main(){
    int a = 5, b = 6, c;
    c = a++ > b && ++b < 10 || b++;
    printf("%d%d%d", a, b, c);
}

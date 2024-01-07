#include <stdio.h>
#include <conio.h>

void main(){
    int b, n, i, r, p, c;
    printf("Enter a binary number: ");
    scanf("%d", &b);
    r = 0;
    for(n = 0; b != 0; n++){
        i = b % 10;
        if(i == 1){
            p = 1;
            c = n;
            while (c > 0)
            {
                p = p*2;
                c--;
            }
            
            r = r + p;
        }
        b /= 10;
    }

    printf("Decimal Number: %d\n", r);
    printf("Enter a Decimal Number: ");
    scanf("%d", &b);
    r = 0;
    for(n = 1; b != 0; n *= 10){
        i = b % 2;
        r = r + i*n;
        b /= 2;
    }
    printf("Binary  Number: %d", r);
}
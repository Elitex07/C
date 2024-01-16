#include <stdio.h>

void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num & 1) printf("%d is odd\n", num);
    else printf("%d is even\n", num);
}
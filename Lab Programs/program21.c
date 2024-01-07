#include <stdio.h>
#include <conio.h>

void main(){
    int n, s, r, t, i;
    int t2;
    for(n=1;n<=100;n++){
        s = 0;
        t = n;
        i = 0;
        for(;t != 0;){
            i++;
            t /= 10;
        }
        t = n;
        t2 = i;
        for(;t != 0;){
            r = t % 10;
            i = t2;
            while(i > 1){
                r *= r;
                i--;
            }
            s = s + r;
            t /= 10;
        }
        if(s == n) printf("%d\n", s);
    }
    
}
#include <stdio.h>
#include <conio.h>

void main(){
    int ar[50], d[50], n, i, j, r, k, occ, apprv;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    if(n <= 0 || n > 50) {
        printf("Invalid size or big size.");
    } else {
        ar[n];
        d[n];
        for(i = 0; i < n; i++){
            printf("Enter element with index %d: ", i);
            scanf("%d", &ar[i]);
        };

        r = 0;
        occ = 1;
        for(i = 0; i < n; i++){
            apprv = 1;
            for(k = 0; k <= r; k++){
                if(ar[i] == d[k]) apprv = 0;
            }
            if(apprv == 0) continue;
            for(j = i + 1; j < n; j++){
                if(ar[i] == ar[j]){
                    occ++;
                    d[r] = ar[j];
                    r++;
                }
            }
            if(occ > 1) printf("%d occurred %d time(s)\n", ar[i], occ);
            occ = 1;
        }
    }
}
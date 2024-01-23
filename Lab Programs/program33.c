#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char file1[1000], file2[1000], i = 0;
    FILE *fptr1, *fptr2;
    fptr1 = fopen("X:/Side Projects/C/Lab Programs/file1.txt", "r");
    fptr2 = fopen("X:/Side Projects/C/Lab Programs/file2.txt", "r");

    while(1){
        if(fptr1 == NULL || fptr2 == NULL){
            printf("Error! File not found.");
            exit(1);
        }
        file1[i] = fgetc(fptr1);
        file2[i] = fgetc(fptr2);

        if(file1[i] == EOF || file2[i] == EOF) break;
        i++;
    }

    if(strcmp(file1, file2) == 0) printf("The files are identical.");
    else printf("The files are not identical.");
}
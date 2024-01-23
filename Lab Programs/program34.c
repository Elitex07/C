// WAP to check whether a given word exists in a file or not. If yes then find the number of times it occurs.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    FILE *fp;
    char word[20], str[100];
    int count = 0;

    printf("Enter the word to be searched: ");
    scanf("%s", word);

    fp = fopen("X:/Side Projects/C/Lab Programs/file1.txt", "r");

    if (fp == NULL){
        printf("File not found!");
        exit(0);
    }

    while (fgets(str, 100, fp) != NULL){
        while(strstr(str, word) != NULL){
            count++;
            strcpy(str, strstr(str, word) + strlen(word));
        }
    }

    if (count == 0) printf("Word not found!");
    else printf("Word found %d times!", count);

    fclose(fp);
}
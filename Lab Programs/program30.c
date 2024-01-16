// WAP to implement strlen (), strcat (),strcpy () using the concept of Functions.

#include <stdio.h>
int stringLen(char a[]);
void stringCat(char str[], char str2[]);
void stringCpy(char str[], char str2[]);

void main(){
    char str[100], str2[100], str3[100];
    printf("Enter the string: ");
    gets(str);
    printf("Enter the string: ");
    gets(str2);

    printf("Length of the string is: %d\n", stringLen(str));
    stringCat(str, str2);
    stringCpy(str, str3);
    printf("Copied string is: %s\n", str3);
}

int stringLen(char a[]){
    int i = 0;
    while(a[i] != '\0'){
        i++;
    }
    return i;
}

void stringCat(char str[], char str2[]){
    int i = 0, j = 0;
    while(str[i] != '\0'){
        i++;
    }
    while(str2[j] != '\0'){
        str[i] = str2[j];
        i++;
        j++;
    }

    printf("Concatenated string is: %s\n", str);
}

void stringCpy(char str[], char str2[]){
    int i = 0;
    while(str[i] != '\0'){
        str2[i] = str[i];
        i++;
    }
}
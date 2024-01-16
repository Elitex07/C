// WAP that finds the sum of diagonal elements of a mxn matrix.

#include <stdio.h>
#include <conio.h>

void main(){
    int mat[100][100], i, j, m, n, s = 0;

    printf("Enter the order of matrix: ");
    scanf("%d%d", &m, &n);
    mat[m][n];
    printf("Enter the elements of the matrix: ");
    for (i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j) s += mat[i][j];
        }
    }

    printf("Sum of diagonal elements of the matrix is: %d", s);
    
}
#include <stdio.h>
#include <conio.h>

int main(){
    int m, n, m2, n2, op, mat1[100][100], mat2[100][100], mat3[100][100], i, j, k;
    printf("Choose what you want to do:\n***************************\n1. Add Matrix\n2. Multiply Matrix\n***************************\nEnter the option number: ");
    scanf("%d", &op);
    if(op != 1 && op != 2){
        printf("Invalid option");
        return 0;
    }

    printf("Enter order of the matrix: ");
    scanf("%d%d", &m, &n);
    if(m > 100 || n > 100){
        printf("Too Large Matrix");
        return 0;
    }
    mat1[m][n];
    printf("Enter the elements of the Matrix: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter order of 2nd matrix: ");
    scanf("%d%d", &m2, &n2);
    if(m > 100 || n > 100){
        printf("Too Large Matrix");
        return 0;
    }
    if(op == 1 && (m != m2 || n != n2)){
        printf("Addition of matrix can be performed only when order of both matrices are same.");
        return 0;
    }
    if(op == 2 && n != m2){
        printf("Order of matrices are not valid for multiplication.");
        return 0;
    }
    mat2[m][n];
    printf("Enter the elements of the Matrix: ");
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    if(op == 1){
        mat3[m][n];
        
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
        }

        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%d ", mat3[i][j]);
            }
            printf("\n");
        }
        return 0;
    } else if(op == 2){
        mat3[n][m2];

        for(i=0;i<m;i++){
            for(j=0;j<n2;j++){
                for(k=0;k<n;k++){
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%d ", mat3[i][j]);
            }
        }
        return 0;
    }
}
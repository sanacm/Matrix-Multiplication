
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomMatrix(int rows, int columns, int matrix[rows][columns]) {
    srand(time(NULL));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
}

void printingMatrix(int rows,int columns,int matrix[rows][columns]){

     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


}


void matrixMultiplication(int rows, int columns, int matrix1[rows][columns], int matrix2[columns][rows]) {

  int product[rows][columns];

   for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            product[i][j] = 0;
            for (int k = 0; k < columns; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the product matrix

    printf("Result matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");

    }




}


int main() {
    int rows, columns;

    printf("\nRows: ");
    scanf("%d", &rows);

    printf("\nColumns: ");
    scanf("%d", &columns);

    int matrix1[rows][columns];
    int matrix2[columns][rows];

    generateRandomMatrix(rows, columns, matrix1);
    generateRandomMatrix(columns, rows, matrix2);

    printf("\n \nMatrix 1:\n \n");

    printingMatrix(rows,columns,matrix1);
    
    printf("\n \nMatrix 2:\n \n ");

    printingMatrix(columns,rows,matrix2);



    printf("Matrix1 * Matrix2 \n \n");

    matrixMultiplication(rows,columns,matrix1,matrix2);


    return 0;





}


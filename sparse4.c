#include <stdio.h>

struct SparseMatrixElement {
    int row;
    int col;
    int value;
};

int main() {
    int rows, cols, numElements1, numElements2;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the number of non-zero elements in the first matrix: ");
    scanf("%d", &numElements1);

    printf("Enter the number of non-zero elements in the second matrix: ");
    scanf("%d", &numElements2);

    struct SparseMatrixElement matrix1[numElements1];
    struct SparseMatrixElement matrix2[numElements2];
    struct SparseMatrixElement result[rows * cols]; // Resultant matrix

    // Input the elements of the first matrix
    for (int i = 0; i < numElements1; i++) {
        printf("Enter row, column, and value for element %d: ", i + 1);
        scanf("%d %d %d", &matrix1[i].row, &matrix1[i].col, &matrix1[i].value);
    }

    // Input the elements of the second matrix
    for (int i = 0; i < numElements2; i++) {
        printf("Enter row, column, and value for element %d: ", i + 1);
        scanf("%d %d %d", &matrix2[i].row, &matrix2[i].col, &matrix2[i].value);
    }

    // Perform matrix addition and store the result in the result matrix

    // Print the resultant matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows * cols; i++) {
        printf("%d %d %d\n", result[i].row, result[i].col, result[i].value);
    }

    return 0;
}


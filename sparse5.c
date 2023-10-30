#include <stdio.h>

struct SparseMatrixElement {
    int row;
    int col;
    int value;
};

int main() {
    int rows, cols, numElements;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the number of non-zero elements in the matrix: ");
    scanf("%d", &numElements);

    struct SparseMatrixElement matrix[numElements];
    struct SparseMatrixElement transposedMatrix[numElements]; // Transposed matrix

    // Input the elements of the matrix
    for (int i = 0; i < numElements; i++) {
        printf("Enter row, column, and value for element %d: ", i + 1);
        scanf("%d %d %d", &matrix[i].row, &matrix[i].col, &matrix[i].value);
    }

    // Find the number of non-zero elements in each column of the original matrix
    int colCount[cols];
    for (int i = 0; i < cols; i++) {
        colCount[i] = 0;
    }

    for (int i = 0; i < numElements; i++) {
        colCount[matrix[i].col]++;
    }

    // Calculate the starting index of each column in the transposed matrix
    int colStart[cols];
    colStart[0] = 0;
    for (int i = 1; i < cols; i++) {
        colStart[i] = colStart[i - 1] + colCount[i - 1];
    }

    // Transpose the matrix
    for (int i = 0; i < numElements; i++) {
        int index = colStart[matrix[i].col]++;
        transposedMatrix[index].row = matrix[i].col;
        transposedMatrix[index].col = matrix[i].row;
        transposedMatrix[index].value = matrix[i].value;
    }

    // Print the transposed matrix
    printf("Transposed Matrix:\n");
    for (int i = 0; i < numElements; i++) {
        printf("%d %d %d\n", transposedMatrix[i].row, transposedMatrix[i].col, transposedMatrix[i].value);
    }

    return 0;
}


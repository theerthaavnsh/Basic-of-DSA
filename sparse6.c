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

    // Input the elements of the matrix
    for (int i = 0; i < numElements; i++) {
        printf("Enter row, column, and value for element %d: ", i + 1);
        scanf("%d %d %d", &matrix[i].row, &matrix[i].col, &matrix[i].value);
    }

    // Check if the matrix is symmetric
    int isSymmetric = 1; // Assume symmetric until proven otherwise

    if (rows != cols) {
        isSymmetric = 0; // A non-square matrix cannot be symmetric
    } else {
        for (int i = 0; i < numElements; i++) {
            int row = matrix[i].row;
            int col = matrix[i].col;
            int value = matrix[i].value;
            int found = 0;

            // Search for the corresponding entry in the opposite direction
            for (int j = 0; j < numElements; j++) {
                if (matrix[j].row == col && matrix[j].col == row && matrix[j].value == value) {
                    found = 1;
                    break;
                }
            }

            if (!found) {
                isSymmetric = 0; // If a corresponding entry is not found, the matrix is not symmetric
                break;
            }
        }
    }

    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}


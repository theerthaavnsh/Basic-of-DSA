#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    int zeroCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter the element at position (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    double sparsity = (double)zeroCount / (rows * cols);
    printf("Sparsity: %.2f\n", sparsity);

    
    return 0;
}


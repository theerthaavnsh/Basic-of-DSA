#include <stdio.h>

int main() {
    int degree, i, x;
    double result = 0.0;

    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    int coefficients[degree + 1];

    printf("Enter the coefficients of the polynomial in descending order of degree:\n");
    for (i = 0; i <= degree; i++) {
        scanf("%d", &coefficients[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    for (i = 0; i <= degree; i++) {
        int term = 1;
        for (int j = 0; j < i; j++) {
            term *= x;
        }
        result += coefficients[i] * term;
    }

    printf("Result of polynomial evaluation: %.2f\n", result);

    return 0;
}


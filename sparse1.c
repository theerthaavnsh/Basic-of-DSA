#include <stdio.h>

struct Polynomial {
    int degree;
    int coefficients[100]; // Assuming a maximum degree of 99
};

int main() {
    struct Polynomial poly1, poly2, result;
    int i, maxDegree;

    printf("Enter the degree of the first polynomial: ");
    scanf("%d", &poly1.degree);

    maxDegree = poly1.degree;

    printf("Enter the coefficients of the first polynomial:\n");
    for (i = 0; i <= poly1.degree; i++) {
        scanf("%d", &poly1.coefficients[i]);
    }

    printf("Enter the degree of the second polynomial: ");
    scanf("%d", &poly2.degree);

    if (poly2.degree > maxDegree) {
        maxDegree = poly2.degree;
    }

    printf("Enter the coefficients of the second polynomial:\n");
    for (i = 0; i <= poly2.degree; i++) {
        scanf("%d", &poly2.coefficients[i]);
    }

    // Add the polynomials
    result.degree = maxDegree;
    for (i = 0; i <= maxDegree; i++) {
        result.coefficients[i] = poly1.coefficients[i] + poly2.coefficients[i];
    }

    printf("First Polynomial: ");
    for (i = maxDegree; i >= 0; i--) {
        printf("%dx^%d ", poly1.coefficients[i], i);
        if (i > 0) {
            printf("+ ");
        }
    }

    printf("\nSecond Polynomial: ");
    for (i = maxDegree; i >= 0; i--) {
        printf("%dx^%d ", poly2.coefficients[i], i);
        if (i > 0) {
            printf("+ ");
        }
    }

    printf("\nResultant Polynomial: ");
    for (i = maxDegree; i >= 0; i--) {
        printf("%dx^%d ", result.coefficients[i], i);
        if (i > 0) {
            printf("+ ");
        }
    }

    return 0;
}


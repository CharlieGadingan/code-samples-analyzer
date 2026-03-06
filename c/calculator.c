#include <stdio.h>
#include <math.h>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double a, double b);

int main() {
    printf("Calculator in C\n");
    printf("===============\n\n");
    
    printf("10 + 5 = %.1f\n", add(10, 5));
    printf("10 - 5 = %.1f\n", subtract(10, 5));
    printf("10 * 5 = %.1f\n", multiply(10, 5));
    printf("10 / 5 = %.1f\n", divide(10, 5));
    printf("2^8 = %.1f\n", power(2, 8));
    
    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

double power(double a, double b) {
    return pow(a, b);
}
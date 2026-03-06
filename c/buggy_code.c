#include <stdio.h>

// Missing semicolon
#define MAX 100

// Function missing return type
main() {
    printf("Starting buggy code\n");
    
    // Undeclared variable
    x = 10;
    
    // Missing semicolon
    y = 20
    
    // Wrong array syntax
    int arr[5];
    arr[5] = 10;  // Index out of bounds
    
    // Missing closing brace
    for (int i = 0; i < 5; i++ {
        printf("%d\n", i);
    
    // Wrong if syntax
    if (x = 10) {
        printf("x is 10\n");
    }
    
    // Missing parentheses
    if x > 5 {
        printf("x is greater than 5\n");
    }
    
    // Wrong string
    char *str = "Unclosed string;
    
    // Function call before declaration
    undefined_function();
    
    return 0;
}

// Missing semicolon after struct
struct Point {
    int x;
    int y;
}  // Missing semicolon

// Function with wrong syntax
void test(
    printf("Missing closing parenthesis\n");
}
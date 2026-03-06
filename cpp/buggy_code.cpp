#include <iostream>
using namespace std;

// Missing semicolon
#define MAX 100

// Missing return type
main() {
    cout << "Starting buggy code" << endl
    
    // Undeclared variable
    x = 10;
    
    // Missing semicolon
    y = 20
    
    // Wrong array syntax
    int arr[5];
    arr[5] = 10;  // Index out of bounds
    
    // Missing closing brace
    for (int i = 0; i < 5; i++ {
        cout << i << endl;
    
    // Wrong if syntax
    if (x = 10) {
        cout << "x is 10" << endl;
    }
    
    // Missing namespace
    cout << "Hello"  // Missing std::
    
    // Unclosed string
    string str = "Unclosed string;
    
    // Wrong class definition
    class Test {
        // Missing public:
        int x;
        void method() {
            cout << x << endl;
        }
    };  // Missing semicolon? No, this one is correct
    
    // Function call before declaration
    undefinedFunction();
    
    return 0
}

// Missing parameter type
void test(param) {
    cout << param << endl;
}
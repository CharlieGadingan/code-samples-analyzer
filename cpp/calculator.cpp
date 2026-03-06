#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
private:
    double result;
    
public:
    Calculator() : result(0) {}
    
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
            throw runtime_error("Cannot divide by zero");
        }
        return a / b;
    }
    
    double power(double a, double b) {
        return pow(a, b);
    }
    
    double squareRoot(double a) {
        if (a < 0) {
            throw runtime_error("Cannot calculate square root of negative number");
        }
        return sqrt(a);
    }
};

int main() {
    Calculator calc;
    
    cout << "Calculator in C++" << endl;
    cout << "=================" << endl << endl;
    
    cout << "10 + 5 = " << calc.add(10, 5) << endl;
    cout << "10 - 5 = " << calc.subtract(10, 5) << endl;
    cout << "10 * 5 = " << calc.multiply(10, 5) << endl;
    cout << "10 / 5 = " << calc.divide(10, 5) << endl;
    cout << "2^8 = " << calc.power(2, 8) << endl;
    cout << "√16 = " << calc.squareRoot(16) << endl;
    
    return 0;
}
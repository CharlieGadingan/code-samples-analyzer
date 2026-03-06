// Calculator in JavaScript

class Calculator {
    constructor() {
        this.result = 0;
    }
    
    add(a, b) {
        return a + b;
    }
    
    subtract(a, b) {
        return a - b;
    }
    
    multiply(a, b) {
        return a * b;
    }
    
    divide(a, b) {
        if (b === 0) {
            throw new Error("Cannot divide by zero");
        }
        return a / b;
    }
    
    power(a, b) {
        return Math.pow(a, b);
    }
    
    squareRoot(a) {
        if (a < 0) {
            throw new Error("Cannot calculate square root of negative number");
        }
        return Math.sqrt(a);
    }
    
    // Arrow function example
    modulus = (a, b) => a % b;
}

// Function-based approach
function calculate(operation, a, b) {
    switch(operation) {
        case 'add':
            return a + b;
        case 'subtract':
            return a - b;
        case 'multiply':
            return a * b;
        case 'divide':
            return b !== 0 ? a / b : 'Error';
        default:
            return 'Unknown operation';
    }
}

// Test the calculator
const calc = new Calculator();

console.log("Calculator in JavaScript");
console.log("=======================\n");

console.log(`10 + 5 = ${calc.add(10, 5)}`);
console.log(`10 - 5 = ${calc.subtract(10, 5)}`);
console.log(`10 * 5 = ${calc.multiply(10, 5)}`);
console.log(`10 / 5 = ${calc.divide(10, 5)}`);
console.log(`2^8 = ${calc.power(2, 8)}`);
console.log(`√16 = ${calc.squareRoot(16)}`);
console.log(`10 % 3 = ${calc.modulus(10, 3)}`);

console.log("\nUsing function:");
console.log(`10 + 5 = ${calculate('add', 10, 5)}`);
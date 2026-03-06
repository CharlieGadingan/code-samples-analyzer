// Buggy JavaScript code for testing

function main() {
    console.log("Starting buggy code")
    
    // Missing semicolons
    let x = 10
    let y = 20
    
    // Undeclared variable (in strict mode would be error)
    z = 30
    
    // Type error
    const num = 10;
    num.toUpperCase(); // Numbers don't have toUpperCase
    
    // Undefined variable
    console.log(undefinedVar);
    
    // Missing closing brace
    for (let i = 0; i < 5; i++ {
        console.log(i);
    
    // Wrong if syntax
    if x = 10 {
        console.log("x is 10");
    }
    
    // Missing parentheses
    if x > 5 {
        console.log("x is greater than 5");
    }
    
    // Unclosed string
    const str = "Unclosed string;
    
    // Wrong array access
    const arr = [1, 2, 3];
    console.log(arr[3]); // undefined, not error
    
    // Calling function before declaration
    myFunc();
    
    // Syntax error in function
    const test = () => {
        console.log("test")
        return // Missing value
    };
    
    // Invalid JSON
    const obj = {
        name: "John",
        age: 30,
        // Missing comma
        city: "New York"
        country: "USA"
    };
    
    // Using reserved word as variable
    const class = "test";
}

// Function missing closing brace
function myFunc() {
    console.log("This function has errors");
    // Missing closing brace
}

// Run the program
main(
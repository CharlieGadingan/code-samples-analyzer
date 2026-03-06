#!/usr/bin/env python3
# Buggy Python code for testing

# Missing colon
def main()
    print("Starting buggy code")
    
    # Indentation error
    x = 10
      y = 20  # Wrong indentation
    
    # Undefined variable
    print(z)
    
    # Missing closing parenthesis
    print("Hello"
    
    # Wrong operator
    if x = 10:  # Should be ==
        print("x is 10")
    
    # TypeError
    numbers = [1, 2, 3]
    numbers + "4"
    
    # Missing self parameter
    class Test:
        def method():  # Missing self
            return "test"
    
    # Infinite recursion (no base case)
    def factorial(n):
        return n * factorial(n-1)
    
    # Calling method before definition
    my_func()
    
    def my_func():
        return "defined later"

if __name__ == "__main__":
    main(
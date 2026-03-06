#!/usr/bin/env python3
# Hello World example

def main():
    print("Hello, World!")
    
    # Simple loop
    for i in range(5):
        print(f"Count: {i}")
    
    # Simple function
    def greet(name):
        return f"Hello, {name}!"
    
    print(greet("Python"))

if __name__ == "__main__":
    main()
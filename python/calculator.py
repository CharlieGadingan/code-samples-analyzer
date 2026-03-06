#!/usr/bin/env python3
# Simple calculator

class Calculator:
    def __init__(self):
        self.result = 0
    
    def add(self, a, b):
        return a + b
    
    def subtract(self, a, b):
        return a - b
    
    def multiply(self, a, b):
        return a * b
    
    def divide(self, a, b):
        if b == 0:
            raise ValueError("Cannot divide by zero")
        return a / b
    
    def power(self, a, b):
        return a ** b
    
    def square_root(self, a):
        if a < 0:
            raise ValueError("Cannot calculate square root of negative number")
        return a ** 0.5

def main():
    calc = Calculator()
    
    print(f"10 + 5 = {calc.add(10, 5)}")
    print(f"10 - 5 = {calc.subtract(10, 5)}")
    print(f"10 * 5 = {calc.multiply(10, 5)}")
    print(f"10 / 5 = {calc.divide(10, 5)}")
    print(f"2^8 = {calc.power(2, 8)}")
    print(f"√16 = {calc.square_root(16)}")

if __name__ == "__main__":
    main()
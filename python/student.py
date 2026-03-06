#!/usr/bin/env python3
# Student class example

class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        self.grades = []
    
    def add_grade(self, grade):
        """Add a grade (0-100)"""
        if 0 <= grade <= 100:
            self.grades.append(grade)
        else:
            print(f"Invalid grade: {grade}")
    
    def get_average(self):
        """Calculate average grade"""
        if not self.grades:
            return 0
        return sum(self.grades) / len(self.grades)
    
    def get_letter_grade(self):
        """Get letter grade based on average"""
        avg = self.get_average()
        
        if avg >= 90:
            return 'A'
        elif avg >= 80:
            return 'B'
        elif avg >= 70:
            return 'C'
        elif avg >= 60:
            return 'D'
        else:
            return 'F'
    
    def __str__(self):
        return f"Student(name={self.name}, age={self.age}, avg={self.get_average():.1f})"

def main():
    # Create students
    students = [
        Student("Alice", 20),
        Student("Bob", 21),
        Student("Charlie", 19)
    ]
    
    # Add grades
    students[0].add_grade(85)
    students[0].add_grade(90)
    students[0].add_grade(78)
    
    students[1].add_grade(92)
    students[1].add_grade(88)
    students[1].add_grade(95)
    
    students[2].add_grade(70)
    students[2].add_grade(65)
    students[2].add_grade(72)
    
    # Display results
    for student in students:
        print(student)
        print(f"  Letter Grade: {student.get_letter_grade()}")
        print()

if __name__ == "__main__":
    main()
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int age;
    vector<int> grades;
    
public:
    Student(string n, int a) : name(n), age(a) {}
    
    void addGrade(int grade) {
        if (grade >= 0 && grade <= 100) {
            grades.push_back(grade);
        } else {
            cout << "Invalid grade: " << grade << endl;
        }
    }
    
    double getAverage() const {
        if (grades.empty()) return 0;
        
        int sum = 0;
        for (int grade : grades) {
            sum += grade;
        }
        return static_cast<double>(sum) / grades.size();
    }
    
    char getLetterGrade() const {
        double avg = getAverage();
        
        if (avg >= 90) return 'A';
        else if (avg >= 80) return 'B';
        else if (avg >= 70) return 'C';
        else if (avg >= 60) return 'D';
        else return 'F';
    }
    
    string getName() const { return name; }
    int getAge() const { return age; }
    
    void display() const {
        cout << "\nStudent: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grades: ";
        
        for (int grade : grades) {
            cout << grade << " ";
        }
        
        cout << "\nAverage: " << getAverage() << endl;
        cout << "Letter Grade: " << getLetterGrade() << endl;
    }
};

int main() {
    // Create students
    vector<Student> students;
    
    students.push_back(Student("Alice", 20));
    students.push_back(Student("Bob", 21));
    students.push_back(Student("Charlie", 19));
    
    // Add grades
    students[0].addGrade(85);
    students[0].addGrade(90);
    students[0].addGrade(78);
    
    students[1].addGrade(92);
    students[1].addGrade(88);
    students[1].addGrade(95);
    
    students[2].addGrade(70);
    students[2].addGrade(65);
    students[2].addGrade(72);
    
    // Display all students
    for (const auto& student : students) {
        student.display();
    }
    
    return 0;
}
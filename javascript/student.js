// Student class in JavaScript

class Student {
    constructor(name, age) {
        this.name = name;
        this.age = age;
        this.grades = [];
    }
    
    addGrade(grade) {
        if (grade >= 0 && grade <= 100) {
            this.grades.push(grade);
        } else {
            console.log(`Invalid grade: ${grade}`);
        }
    }
    
    getAverage() {
        if (this.grades.length === 0) return 0;
        
        const sum = this.grades.reduce((total, grade) => total + grade, 0);
        return sum / this.grades.length;
    }
    
    getLetterGrade() {
        const avg = this.getAverage();
        
        if (avg >= 90) return 'A';
        if (avg >= 80) return 'B';
        if (avg >= 70) return 'C';
        if (avg >= 60) return 'D';
        return 'F';
    }
    
    getGradeStatus() {
        const avg = this.getAverage();
        return {
            average: avg.toFixed(1),
            letter: this.getLetterGrade(),
            passed: avg >= 60
        };
    }
    
    toString() {
        const status = this.getGradeStatus();
        return `${this.name} (${this.age}): Average=${status.average}, Grade=${status.letter}, ${status.passed ? 'Passed' : 'Failed'}`;
    }
}

// Create multiple students
const students = [
    new Student("Alice", 20),
    new Student("Bob", 21),
    new Student("Charlie", 19)
];

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

// Display results
console.log("Student Grades\n");
students.forEach(student => {
    console.log(student.toString());
    
    // Show all grades
    console.log(`  Grades: ${student.grades.join(', ')}`);
    console.log();
});

// Find top student
const topStudent = students.reduce((best, current) => {
    return current.getAverage() > best.getAverage() ? current : best;
});

console.log(`Top Student: ${topStudent.name} with ${topStudent.getAverage().toFixed(1)}%`);
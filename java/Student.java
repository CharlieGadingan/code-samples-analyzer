package java;

public class Student {
    
}
import java.util.ArrayList;
import java.util.List;

public class Student {
    private String name;
    private int age;
    private List<Integer> grades;
    
    public Student(String name, int age) {
        this.name = name;
        this.age = age;
        this.grades = new ArrayList<>();
    }
    
    public void addGrade(int grade) {
        if (grade >= 0 && grade <= 100) {
            grades.add(grade);
        } else {
            System.out.println("Invalid grade: " + grade);
        }
    }
    
    public double getAverageGrade() {
        if (grades.isEmpty()) {
            return 0;
        }
        
        int sum = 0;
        for (int grade : grades) {
            sum += grade;
        }
        return (double) sum / grades.size();
    }
    
    public String getName() {
        return name;
    }
    
    public int getAge() {
        return age;
    }
    
    public List<Integer> getGrades() {
        return new ArrayList<>(grades);
    }
    
    public static void main(String[] args) {
        Student student = new Student("John Doe", 20);
        
        student.addGrade(85);
        student.addGrade(90);
        student.addGrade(78);
        student.addGrade(95);
        
        System.out.println("Student: " + student.getName());
        System.out.println("Age: " + student.getAge());
        System.out.println("Average Grade: " + student.getAverageGrade());
    }
}
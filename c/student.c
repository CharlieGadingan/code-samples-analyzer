
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 50
#define MAX_GRADES 20

// Student structure
struct Student {
    char name[MAX_NAME];
    int age;
    int grades[MAX_GRADES];
    int grade_count;
};

// Function prototypes
void init_student(struct Student *s, const char *name, int age);
void add_grade(struct Student *s, int grade);
double calculate_average(struct Student *s);
char get_letter_grade(struct Student *s);
void print_student(struct Student *s);

int main() {
    // Create students
    struct Student students[3];
    
    init_student(&students[0], "Alice", 20);
    init_student(&students[1], "Bob", 21);
    init_student(&students[2], "Charlie", 19);
    
    // Add grades
    add_grade(&students[0], 85);
    add_grade(&students[0], 90);
    add_grade(&students[0], 78);
    
    add_grade(&students[1], 92);
    add_grade(&students[1], 88);
    add_grade(&students[1], 95);
    
    add_grade(&students[2], 70);
    add_grade(&students[2], 65);
    add_grade(&students[2], 72);
    
    // Print results
    for (int i = 0; i < 3; i++) {
        print_student(&students[i]);
    }
    
    return 0;
}

void init_student(struct Student *s, const char *name, int age) {
    strcpy(s->name, name);
    s->age = age;
    s->grade_count = 0;
}

void add_grade(struct Student *s, int grade) {
    if (s->grade_count < MAX_GRADES) {
        if (grade >= 0 && grade <= 100) {
            s->grades[s->grade_count] = grade;
            s->grade_count++;
        } else {
            printf("Invalid grade: %d\n", grade);
        }
    } else {
        printf("Maximum grades reached\n");
    }
}

double calculate_average(struct Student *s) {
    if (s->grade_count == 0) {
        return 0;
    }
    
    int sum = 0;
    for (int i = 0; i < s->grade_count; i++) {
        sum += s->grades[i];
    }
    
    return (double)sum / s->grade_count;
}

char get_letter_grade(struct Student *s) {
    double avg = calculate_average(s);
    
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

void print_student(struct Student *s) {
    printf("\nStudent: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("Grades: ");
    
    for (int i = 0; i < s->grade_count; i++) {
        printf("%d ", s->grades[i]);
    }
    
    printf("\nAverage: %.1f\n", calculate_average(s));
    printf("Letter Grade: %c\n", get_letter_grade(s));
}
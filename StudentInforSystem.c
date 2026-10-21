#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
// Structure to store student information
typedef struct {
    int id;
    char name[50];
    char phone[15];
} Student;

// Function to add a student
void addStudent(Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Cannot add more students. Maximum limit reached.\n");
        return;
    }
    printf("Enter Student ID: ");
    scanf("%d", &students[*count].id);
    printf("Enter Student Name: ");
    getchar(); // Clear input buffer
    fgets(students[*count].name, sizeof(students[*count].name), stdin);
    students[*count].name[strcspn(students[*count].name, "\n")] = 0; // Remove newline
    printf("Enter Phone Number: ");
    scanf("%s", students[*count].phone);
    (*count)++;
    printf("Student added successfully!\n");
}
// Function to view all students
void viewStudents(Student students[], int count) {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }
    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Phone: %s\n", students[i].id, students[i].name, students[i].phone);
    }
}
// Function to delete a student by ID
void deleteStudent(Student students[], int *count) {
    if (*count == 0) {
        printf("No students to delete.\n");
        return;
    }
    int id, i, found = 0;
    printf("Enter the Student ID to delete: ");
    scanf("%d", &id);

    for (i = 0; i < *count; i++) {
        if (students[i].id == id) {
            found = 1;
            break;
        }
    }
    if (found) {
        for (int j = i; j < *count - 1; j++) {
            students[j] = students[j + 1];
        }
        (*count)--;
        printf("Student with ID %d deleted successfully!\n", id);
    } else {
        printf("Student with ID %d not found.\n", id);
    }
}
// Function to display total students
void displayTotalStudents(int count) {
    printf("Total Students: %d\n", count);
}

int main() {
    Student students[MAX_STUDENTS];
    int count = 0; // Total number of students
    int choice;

    while (1) {
        printf("\n=== Student Information System ===\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Delete Student by ID\n");
        printf("4. Display Total Students\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                viewStudents(students, count);
                break;
            case 3:
                deleteStudent(students, &count);
                break;
            case 4:
                displayTotalStudents(count);
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}


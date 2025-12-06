#include <stdio.h>
#include <string.h>

#define MAX 100   // maximum number of students

// Structure to store student details
typedef struct {
    int id;
    char name[50];
    int age;
    float marks;
} Student;

Student students[MAX];  // array of structures
int count = 0;          // number of students (global variable)

// Function to add a student
void addStudent() {
    if (count == MAX) {
        printf("Database Full!\n");
        return;
    }

    printf("\nEnter Student ID: ");
    scanf("%d", &students[count].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name);  // to read string with spaces

    printf("Enter Age: ");
    scanf("%d", &students[count].age);

    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);

    count++;
    printf("\nStudent Added Successfully!\n");
}

// Function to display all students
void displayStudents() {
    if (count == 0) {
        printf("\nNo records found!\n");
        return;
    }

    printf("\n---------------- STUDENT LIST ----------------\n");
    printf("ID\tName\t\tAge\tMarks\n");
    printf("----------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%-15s\t%d\t%.2f\n",
            students[i].id,
            students[i].name,
            students[i].age,
            students[i].marks);
    }
}

// Function to search student by ID
void searchStudent() {
    int id;
    printf("\nEnter Student ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("\nRecord Found:\n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("\nStudent Not Found!\n");
}

// Function to update student details
void updateStudent() {
    int id;
    printf("\nEnter Student ID to Update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("\nEnter New Name: ");
            scanf(" %[^\n]", students[i].name);

            printf("Enter New Age: ");
            scanf("%d", &students[i].age);

            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);

            printf("\nStudent Updated Successfully!\n");
            return;
        }
    }
    printf("\nStudent Not Found!\n");
}

// Function to delete a student
void deleteStudent() {
    int id;
    printf("\nEnter Student ID to Delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {

            // shift elements to left
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }

            count--;
            printf("\nStudent Deleted Successfully!\n");
            return;
        }
    }
    printf("\nStudent Not Found!\n");
}

// MAIN MENU
int main() {
    int choice;

    do {
        printf("\n\n====== STUDENT MANAGEMENT SYSTEM ======\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: printf("\nExiting...\n"); break;
            default: printf("\nInvalid Choice! Try Again.\n");
        }

    } while(choice != 6);

    return 0;
}

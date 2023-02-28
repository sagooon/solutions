## WAP designing a menu base system which reads two integer values from user and calculate the sum, difference, and product using functions.

```
#include <stdio.h>

// Function to calculate sum of two integers
int sum(int a, int b) {
    return a + b;
}

// Function to calculate difference of two integers
int difference(int a, int b) {
    return a - b;
}

// Function to calculate product of two integers
int product(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;
    int choice;
    int result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Choose an operation to perform:\n");
    printf("1. Sum\n");
    printf("2. Difference\n");
    printf("3. Product\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = sum(num1, num2);
            printf("Sum of %d and %d is %d", num1, num2, result);
            break;
        case 2:
            result = difference(num1, num2);
            printf("Difference between %d and %d is %d", num1, num2, result);
            break;
        case 3:
            result = product(num1, num2);
            printf("Product of %d and %d is %d", num1, num2, result);
            break;
        default:
            printf("Invalid choice!");
            break;
    }

    return 0;
}

```
## WAP that takes roll number, fname, lname of 5 students and prints the same records in ascending order on the basis of roll number

```
#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char fname[20];
    char lname[20];
};

int main() {
    struct student students[5];
    struct student temp;
    int i, j;

    // Get input from user
    for (i = 0; i < 5; i++) {
        printf("Enter student %d details:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("First Name: ");
        scanf("%s", students[i].fname);
        printf("Last Name: ");
        scanf("%s", students[i].lname);
    }

    // Sort the array based on roll number using bubble sort
    for (i = 0; i < 5-1; i++) {
        for (j = 0; j < 5-i-1; j++) {
            if (students[j].roll_no > students[j+1].roll_no) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Students in ascending order by roll number:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t%s\t%s\n", students[i].roll_no, students[i].fname, students[i].lname);
    }

    return 0;
}

```

## WAP that takes name and marks of 5 students and sort data in descending order on the basis of marks and display them

```
#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int marks;
};

int main() {
    struct student students[5], temp;
    int i, j;

    // Get input from user
    for (i = 0; i < 5; i++) {
        printf("Enter student %d details:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Sort the array based on marks in descending order using bubble sort
    for (i = 0; i < 5-1; i++) {
        for (j = 0; j < 5-i-1; j++) {
            if (students[j].marks < students[j+1].marks) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Students in descending order by marks:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\t%d\n", students[i].name, students[i].marks);
    }

    return 0;
}

```

## WAP that reads names and address of different students and rearrange them on the basis of name in alphabetic order

```
#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    char address[50];
};

int main() {
    struct student students[5], temp;
    int i, j;

    // Get input from user
    for (i = 0; i < 5; i++) {
        printf("Enter student %d details:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Address: ");
        scanf("%s", students[i].address);
    }

    // Sort the array based on names in alphabetic order using bubble sort
    for (i = 0; i < 5-1; i++) {
        for (j = 0; j < 5-i-1; j++) {
            if (strcmp(students[j].name, students[j+1].name) > 0) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Students in alphabetic order by name:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\t%s\n", students[i].name, students[i].address);
    }

    return 0;
}

```

## WAP that takes emp_id, name and salary of 10 employees and print the records of the employee who has maximum salary

```
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int emp_id;
    char name[50];
    int salary;
};

int main() {
    int i, max_salary = 0, max_salary_index = 0;
    struct Employee employees[10];

    // Get input from user
    for (i = 0; i < 10; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%d", &employees[i].salary);

        // Check if this employee has the maximum salary seen so far
        if (employees[i].salary > max_salary) {
            max_salary = employees[i].salary;
            max_salary_index = i;
        }
    }

    // Print the record of the employee with the maximum salary
    printf("Record of employee with maximum salary:\n");
    printf("Employee ID: %d\n", employees[max_salary_index].emp_id);
    printf("Name: %s\n", employees[max_salary_index].name);
    printf("Salary: %d\n", employees[max_salary_index].salary);

    return 0;
}

```

## WAP that takes sid_id, name and percentage of 10 students and print the records of students who scored distinctions

```
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int sid_id;
    char name[50];
    float percentage;
};

int main() {
    int i;
    struct Student students[10];

    // Get input from user
    for (i = 0; i < 10; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Student ID: ");
        scanf("%d", &students[i].sid_id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
    }

    // Print records of students who scored distinction (percentage >= 75)
    printf("Records of students who scored distinction:\n");
    for (i = 0; i < 10; i++) {
        if (students[i].percentage >= 75) {
            printf("Student ID: %d\n", students[i].sid_id);
            printf("Name: %s\n", students[i].name);
            printf("Percentage: %.2f\n", students[i].percentage);
        }
    }

    return 0;
}

```

## WAP to write and read roll number, name and percentage of students to a data file until you press y-yes and finally display the contents to the data file
```
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll_no;
    char name[50];
    float percentage;
};

int main() {
    struct Student student;
    char choice;
    FILE *file;

    // Open file for writing
    file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error: Failed to open file.\n");
        return 1;
    }

    // Get input from user and write to file
    do {
        printf("Enter student details:\n");
        printf("Roll No: ");
        scanf("%d", &student.roll_no);
        printf("Name: ");
        scanf("%s", student.name);
        printf("Percentage: ");
        scanf("%f", &student.percentage);

        fwrite(&student, sizeof(struct Student), 1, file);

        printf("Do you want to add more students? (y/n) ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(file);

    // Open file for reading
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error: Failed to open file.\n");
        return 1;
    }

    // Read and display contents of file
    printf("\nStudent details:\n");
    printf("Roll No\tName\t\tPercentage\n");
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("%d\t%s\t%.2f\n", student.roll_no, student.name, student.percentage);
    }

    fclose(file);

    return 0;
}

```

## WAP designing a menu base system which has the following features:
a. Writing records
b. Reading records
c. Appending records
d. Deleting file

```

Coding on progress. Please wait.
```

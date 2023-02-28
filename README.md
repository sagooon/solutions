## 4. WAP designing a menu base system which reads two integer values from user and calculate the sum, difference, and product using functions.

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
## 5. WAP that takes roll number, fname, lname of 5 students and prints the same records in ascending order on the basis of roll number

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

## 6. WAP that takes name and marks of 5 students and sort data in descending order on the basis of marks and display them

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

## 7. WAP that reads names and address of different students and rearrange them on the basis of name in alphabetic order

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

## 8. WAP that takes emp_id, name and salary of 10 employees and print the records of the employee who has maximum salary

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

## 9. WAP that takes sid_id, name and percentage of 10 students and print the records of students who scored distinctions

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

## 10. WAP to write and read roll number, name and percentage of students to/from a data file 
```
#include <stdio.h>
#include <stdlib.h>

// Define a struct to hold the student data
struct student {
    int roll_num;
    char name[50];
    float percentage;
};

// Function to write student records to a file
void write_records(FILE *fptr) {
    int i, num_students;
    struct student stu;

    printf("How many student records do you want to enter? ");
    scanf("%d", &num_students);

    // Loop through each student and write their data to the file
    for (i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Roll number: ");
        scanf("%d", &stu.roll_num);
        printf("Name: ");
        scanf("%s", stu.name);
        printf("Percentage: ");
        scanf("%f", &stu.percentage);

        fprintf(fptr, "%d %s %f\n", stu.roll_num, stu.name, stu.percentage);
    }

    printf("\nStudent records written to file.\n");
}

// Function to read student records from a file
void read_records(FILE *fptr) {
    struct student stu;

    printf("\nRoll Number\tName\tPercentage\n");

    // Loop through each line of the file and print the student data
    while (fscanf(fptr, "%d %s %f", &stu.roll_num, stu.name, &stu.percentage) != EOF) {
        printf("%d\t\t%s\t%.2f\n", stu.roll_num, stu.name, stu.percentage);
    }
}

int main() {
    FILE *fptr;
    char filename[50], choice;

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in append mode (to add new records) or read mode (to display existing records)
    printf("Do you want to append to the file or read from it? (a/r) ");
    scanf(" %c", &choice);

    if (choice == 'a') {
        // Open the file in append mode
        fptr = fopen(filename, "a");

        if (fptr == NULL) {
            printf("Error opening file.\n");
            exit(1);
        }

        write_records(fptr);

        fclose(fptr);
    }
    else if (choice == 'r') {
        // Open the file in read mode
        fptr = fopen(filename, "r");

        if (fptr == NULL) {
            printf("Error opening file.\n");
            exit(1);
        }

        read_records(fptr);

        fclose(fptr);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}

```


## 11. WAP that stores roll number, name and percentage of students to a data file until you press y-yes and finally display the contents to the data file
```
#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll_number;
    char name[50];
    float percentage;
};

int main() {
    struct student s;
    FILE *fp;
    char ch = 'y';
    
    fp = fopen("student_data.txt", "w");
    if(fp == NULL) {
        printf("Error: Unable to open file.\n");
        exit(1);
    }
    
    while(ch == 'y' || ch == 'Y') {
        printf("\nEnter Roll Number: ");
        scanf("%d", &s.roll_number);
        
        printf("Enter Name: ");
        scanf("%s", s.name);
        
        printf("Enter Percentage: ");
        scanf("%f", &s.percentage);
        
        fwrite(&s, sizeof(s), 1, fp);
        
        printf("\nDo you want to enter data for another student? (y/n): ");
        scanf(" %c", &ch);
    }
    
    fclose(fp);
    
    // Read the contents of the data file
    fp = fopen("student_data.txt", "r");
    if(fp == NULL) {
        printf("Error: Unable to open file.\n");
        exit(1);
    }
    
    printf("\n\nStudent Data:\n\n");
    printf("Roll Number\tName\t\tPercentage\n");
    
    while(fread(&s, sizeof(s), 1, fp)) {
        printf("%d\t\t%s\t\t%.2f\n", s.roll_number, s.name, s.percentage);
    }
    
    fclose(fp);
    
    return 0;
}


```

## 12. WAP designing a menu base system which has the following features:
a. Writing records\n
b. Reading records\n
c. Appending records\n
d. Deleting file\n

```
#include <stdio.h>
#include <stdlib.h>

void write_records();
void read_records();
void append_records();
void delete_file();

int main() {
    char choice;

    while(1) {
        printf("\n\nMenu\n");
        printf("----\n");
        printf("1. Write Records\n");
        printf("2. Read Records\n");
        printf("3. Append Records\n");
        printf("4. Delete File\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf(" %c", &choice);

        switch(choice) {
            case '1':
                write_records();
                break;
            case '2':
                read_records();
                break;
            case '3':
                append_records();
                break;
            case '4':
                delete_file();
                break;
            case '5':
                exit(0);
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }
    return 0;
}

void write_records() {
    char filename[50];
    FILE *fp;
    int roll, marks;

    printf("\nEnter the filename to write records: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");

    if(fp == NULL) {
        printf("\nFailed to open file.\n");
        return;
    }

    printf("\nEnter the roll number and marks (separated by a space) for 10 students:\n");

    for(int i=1; i<=10; i++) {
        scanf("%d %d", &roll, &marks);
        fprintf(fp, "%d %d\n", roll, marks);
    }

    fclose(fp);
    printf("\nRecords written to file successfully.\n");
}

void read_records() {
    char filename[50];
    FILE *fp;
    int roll, marks;

    printf("\nEnter the filename to read records: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL) {
        printf("\nFailed to open file.\n");
        return;
    }

    printf("\nRoll Number\tMarks\n");
    printf("------------------------\n");

    while(fscanf(fp, "%d %d", &roll, &marks) == 2) {
        printf("%d\t\t%d\n", roll, marks);
    }

    fclose(fp);
}

void append_records() {
    char filename[50];
    FILE *fp;
    int roll, marks;

    printf("\nEnter the filename to append records: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");

    if(fp == NULL) {
        printf("\nFailed to open file.\n");
        return;
    }

    printf("\nEnter the roll number and marks (separated by a space) for 5 students:\n");

    for(int i=1; i<=5; i++) {
        scanf("%d %d", &roll, &marks);
        fprintf(fp, "%d %d\n", roll, marks);
    }

    fclose(fp);
    printf("\nRecords appended to file successfully.\n");
}

void delete_file() {
    char filename[50];
    int status;

    printf("\nEnter the filename to delete: ");
    scanf("%s", filename);

    status = remove(filename);

    if(status == 0) {
        printf("\nFile deleted successfully.\n");
    } else {
        printf("\nFailed to delete file.\n");
    }
}

```

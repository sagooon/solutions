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


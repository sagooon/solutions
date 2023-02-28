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

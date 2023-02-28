#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}


int difference(int a, int b) {
    return a - b;
}


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

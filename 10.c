#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll_num;
    char name[50];
    float percentage;
};

void write_records(FILE *fptr) {
    int i, num_students;
    struct student stu;

    printf("How many student records do you want to enter? ");
    scanf("%d", &num_students);

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


void read_records(FILE *fptr) {
    struct student stu;

    printf("\nRoll Number\tName\tPercentage\n");

    while (fscanf(fptr, "%d %s %f", &stu.roll_num, stu.name, &stu.percentage) != EOF) {
        printf("%d\t\t%s\t%.2f\n", stu.roll_num, stu.name, stu.percentage);
    }
}

int main() {
    FILE *fptr;
    char filename[50], choice;

    printf("Enter the filename: ");
    scanf("%s", filename);

    printf("Do you want to append to the file or read from it? (a/r) ");
    scanf(" %c", &choice);

    if (choice == 'a') {
        fptr = fopen(filename, "a");

        if (fptr == NULL) {
            printf("Error opening file.\n");
            exit(1);
        }

        write_records(fptr);

        fclose(fptr);
    }
    else if (choice == 'r') {
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

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

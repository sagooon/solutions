#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    char address[50];
};

int main() {
    struct student students[5], temp;
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("Enter student %d details:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Address: ");
        scanf("%s", students[i].address);
    }

    for (i = 0; i < 5-1; i++) {
        for (j = 0; j < 5-i-1; j++) {
            if (strcmp(students[j].name, students[j+1].name) > 0) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    printf("Students in alphabetic order by name:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\t%s\n", students[i].name, students[i].address);
    }

    return 0;
}

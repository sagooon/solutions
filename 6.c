#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int marks;
};

int main() {
    struct student students[5], temp;
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("Enter student %d details:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    for (i = 0; i < 5-1; i++) {
        for (j = 0; j < 5-i-1; j++) {
            if (students[j].marks < students[j+1].marks) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    printf("Students in descending order by marks:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\t%d\n", students[i].name, students[i].marks);
    }

    return 0;
}

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

    for (i = 0; i < 10; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Student ID: ");
        scanf("%d", &students[i].sid_id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
    }

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

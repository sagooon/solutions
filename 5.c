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

    for (i = 0; i < 5; i++) {
        printf("Enter student %d details:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("First Name: ");
        scanf("%s", students[i].fname);
        printf("Last Name: ");
        scanf("%s", students[i].lname);
    }

    for (i = 0; i < 5-1; i++) {
        for (j = 0; j < 5-i-1; j++) {
            if (students[j].roll_no > students[j+1].roll_no) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    printf("Students in ascending order by roll number:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t%s\t%s\n", students[i].roll_no, students[i].fname, students[i].lname);
    }

    return 0;
}

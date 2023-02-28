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


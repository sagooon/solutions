#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int emp_id;
    char name[50];
    int salary;
};

int main() {
    int i, max_salary = 0, max_salary_index = 0;
    struct Employee employees[10];

    for (i = 0; i < 10; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%d", &employees[i].salary);

        if (employees[i].salary > max_salary) {
            max_salary = employees[i].salary;
            max_salary_index = i;
        }
    }
    printf("Record of employee with maximum salary:\n");
    printf("Employee ID: %d\n", employees[max_salary_index].emp_id);
    printf("Name: %s\n", employees[max_salary_index].name);
    printf("Salary: %d\n", employees[max_salary_index].salary);

    return 0;
}

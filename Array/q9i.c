/* Write a program of structure employee that provides the following
a. information -print and display empno, empname, address and age
b. Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age
 */
#include<stdio.h>

struct employee {
    int empno;
    int age;
    char name[20];
    char address[50];
};

int main() {
    struct employee emp[5];

    printf("--------------Enter Employee Details--------------\n");
    for(int i = 0; i < 5; i++) {
        printf("Employee number: ");
        scanf("%d", &emp[i].empno);
        
        printf("Employee name: ");
        scanf("%19s", &emp[i].name);
        
        printf("Employee address: ");
        scanf("%49s", &emp[i].address);
        
        printf("Employee age: ");
        scanf("%d", &emp[i].age);

        printf("\n");
    }

    printf("\n---------------Employee Details-----------------\n");
    for(int i = 0; i < 5; i++) {
        printf("\nEmployee number: %d", emp[i].empno);
        printf("\nEmployee name: %s", emp[i].name);
        printf("\nEmployee address: %s", emp[i].address);
        printf("\nEmployee age: %d", emp[i].age);

        printf("\n\n");
    }

    return 0;
}

#include<stdio.h>

// Define a structure named 'Student'
struct Student {
    int id;
    char name[50];
    float percentage;
};

// Define a union named 'Data'
union Data {
    int integer;
    float floating;
};

int main() {
    struct Student s1, s2;
    union Data d1, d2;

    // Input details for student 1
    printf("Enter details for student 1:\n");
    printf("ID: ");
    scanf("%d", &s1.id);
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Percentage: ");
    scanf("%f", &s1.percentage);

    // Input details for student 2
    printf("\nEnter details for student 2:\n");
    printf("ID: ");
    scanf("%d", &s2.id);
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Percentage: ");
    scanf("%f", &s2.percentage);

    // Print details of students using structures
    printf("\nDetails of student 1:\n");
    printf("ID: %d\nName: %s\nPercentage: %.2f\n", s1.id, s1.name, s1.percentage);
    printf("\nDetails of student 2:\n");
    printf("ID: %d\nName: %s\nPercentage: %.2f\n", s2.id, s2.name, s2.percentage);

    // Explanation of union
    printf("\nExplanation of union:\n");
    d1.integer = 10;
    d2.floating = 3.14;
    printf("Integer value in union: %d\n", d1.integer);
    printf("Floating value in union: %.2f\n", d2.floating);

    return 0;
}

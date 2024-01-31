// 12. Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include<stdio.h>
int main()
{
    int students,apples;
    printf("Enter the Number of Students ");
    scanf("%d",&students);
    apples=5*students;
    printf("%d number of Apples are Required.",apples);

    return 0;

}
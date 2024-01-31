// Q17. Write a C program to check whether a triangle can be formed with the given values for the angles.
#include<stdio.h>
int main()
{
    int ang1,ang2,ang3,sum;

    printf("Enter The Three Angles To check whether they can form a Triangle. Any angle can't be zero \n");
    scanf("%d""%d""%d",&ang1,&ang2,&ang3);
    sum = (ang1+ang2+ang3);

    if(sum<=180 )
    {
        printf("The Three Angles can form a Triangle");
    }
    else
        printf("The Three Angles cannot form a triangle");

       return 0;
}
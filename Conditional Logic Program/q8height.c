// Q8. WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
int main()
{
    float ht;
    printf("Enter Your Height in centimeter \n");
    scanf("%f",&ht);

    if(ht<150)
    {
        printf("You are Short");
    }
    else if((ht>=150)&&(ht<165))
    {
        printf("You have an Average height");
    }
    else if((ht>=165)&&(ht<=195))
    {
        printf("You are tall");
    }
    else
    {
        printf("You have an Abnormal height");
    }
    return 0;
}
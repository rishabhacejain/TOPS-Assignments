// 8. Find perimeter of Square formula : P = 4 * a
#include<stdio.h>
int main()
{
    int a;      //variable for accepting the side of the square.
    float perimeter;    //variable to store the perimeter.

    printf("Enter The length Of the side\n");
    scanf("%d",&a);
    perimeter= 4*a;
    printf("The Perimeter of the %f",perimeter);

    return 0;

}
// Q3. WAP to Find Area And Circumference of Circle
#include<stdio.h>
#define pi 3.14                           
int main(){
int radius;
float area,circum;
printf("Enter The Radius \n");
scanf("%d", &radius);
area = pi * radius * radius;
printf("The Area Of The Circle Is %f \n", area);
circum = 2 * pi * radius;
printf("The Circumference Of The Circle Is %f \n", circum);
return 0;
}
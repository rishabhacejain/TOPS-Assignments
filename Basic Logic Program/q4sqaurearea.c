// Q4. Find Area of Square. formula : a = a2
#include<stdio.h>
int main(){
    int a;                                                    //Variable For Side Of The Square
    float area;                                              //Variable to store area
    printf("Enter the Length of the Side Of a Sqaure \n");      //Asking For Input Of Side Of the Square.
    scanf("%d",&a);                                            //Taking input Of Side
    area = a*a; 

     printf("Area of Square is %f\n",area);

   return 0;

}
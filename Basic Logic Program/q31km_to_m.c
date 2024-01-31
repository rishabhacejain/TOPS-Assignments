#include<stdio.h>
int main()
{
    float km,m;
    printf("Enter The Number Of Kilometer u wish to convert into meters \n");
    scanf("%f",&km);
    m=km*1000;

    printf("%.3f Kilometers is equal to %.2f meters",km,m);

    return 0;
}
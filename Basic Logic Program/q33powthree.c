#include<stdio.h>
#include<math.h>

int main()
{
    float N,res1,res2,res3;
    scanf("%f",&N);
    res1=pow(N,1);
    res2=pow(N,2);
    res3=pow(N,3);
    printf("%f^1, %f^2, %f^3 is %f %f %f",N,N,N,res1,res2,res3);

    return 0;


}

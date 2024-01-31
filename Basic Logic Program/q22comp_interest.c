#include<stdio.h>
#include<math.h>
int main()
{
    double Amount,Principle,roi,n,t,CI;

    printf("Enter The Priciple Amount\n");
    scanf("%lf",&Principle);
    printf("Enter The rate Of Interest\n");
    scanf("%lf",&roi);
    printf("Enter The Time in Years\n");
    scanf("%lf",&t);
    printf("Enter The MNumber of Times The Interest is compounded in a year\n");
    scanf("%lf",&n);
    Amount =(Principle*pow((1 + roi/100),t));
    printf("The Total Amount after time t with compound interest is \n%lf",Amount);
    CI =Amount-Principle;
    printf("\nThe Compound Interest is \n %lf",CI);

    return 0;


}
//Q18. Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main()
{
    int BPrice,SPrice,PL;
    printf("Enter The Purchase Price Of The Item \n");
    scanf("%d",&BPrice);
    printf("Enter The Selling Price Of The Item \n");
    scanf("%d",&SPrice);
    PL = SPrice-BPrice;
    if(PL>0)
    {
        PL=SPrice-BPrice;
        printf(" The Profit In This trasaction Is %d",PL);
    }
    else if(PL<0)
    {
        PL=SPrice-BPrice;
        printf("The  loss In This trasaction Is %d",PL);
    }
    else
    {
        PL=SPrice-BPrice;
        printf("There is %d Profit %d loss In This trasaction ",PL,PL);
    }

return 0;



}
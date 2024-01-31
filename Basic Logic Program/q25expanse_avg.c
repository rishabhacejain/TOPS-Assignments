// 25.Accept 5 expense from user and find average of expense
#include<stdio.h>
int main(){
    float exp1, exp2, exp3, exp4, exp5;
    float sum,average;
    printf("Enter 5 Expanses\n");
    scanf("%f" "%f" "%f" "%f" "%f",&exp1,&exp2,&exp3,&exp4,&exp5);
    sum=(exp1+exp2+exp3+exp4+exp5);
    average=sum/5;

    printf("The average Expense is %.2f",average);

    return 0;
    
}

// 12. Program of Armstrong Number in C Using For Loop & While Loop

// using while loop
#include<stdio.h>

int main()
{
    int n,num,r,ans=0;

    printf("Enter number:");
    scanf("%d",&num);

    n=num;
    while(n>0)
    {
     r  = n%10;
     ans=ans+ r*r*r;
     n  = n/10;
    }if(ans==num)
    {
        printf("number is armstrong\n",num);

    }
    else
    {
        printf("number is not armstorng\n",num);
    }

    return 0;
}

/* // using for loop
#include<stdio.h>
int main(){

    int n,num,r,ans=0;

    printf("enter number:");
    scanf("%d",&num);

   
    for(n=num;n>0;n=n/10){
     r= n%10;
     ans=ans+ r*r*r;
     
    }if(ans==num){
        printf("number is armstrong\n",num);

    }else{
        printf("number is not armstorng\n", num);
    }

    return 0;
} */
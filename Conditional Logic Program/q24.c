#include<stdio.h>
int main()
{
    int Month,days;

    printf("Enter The Month In number(1-12)");
    scanf("%d",&Month);
    switch (Month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("The Month Has 31 Days.");
        break;
    
    
    case 4: 
    case 6: 
    case 9: 
    case 11: 
        printf("The Month has 30 Days."); 
        break; 
  
    
    case 2: 
        printf("The Month has 28 or 29 Days."); 
        break; 
  
    default: 
        printf("Invalid Month."); 
        break; 
    }
    return 0;
}
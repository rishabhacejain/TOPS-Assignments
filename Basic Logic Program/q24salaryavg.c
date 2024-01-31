//q24
//Accept 5 employees name and salary and count average and total salary


#include<stdio.h>

int main(){

    int emp1,emp2,emp3,emp4,emp5,average,total;
    char name1,name2,name3,name4,name5;

    printf("enter name:");
    scanf("%s", &name1);

    printf("enter salary:");
    scanf("%d", &emp1);

    printf("enter name:");
    scanf("%s", &name2);

    printf("enter salary:");
    scanf("%d", &emp2);

    printf("enter name:");
    scanf("%s", &name3);

    printf("enter salary:");
    scanf("%d", &emp3);

    printf("enter name:");
    scanf("%s", &name4);

    printf("enter salary:");
    scanf("%d", &emp4);

    printf("enter name:");
    scanf("%s", &name5);

    printf("enter salary:");
    scanf("%d", &emp5);


    
     total=emp1+emp2+emp3+emp4+emp5;
    
     printf(" Total salary of all employes is: Rs %d\n",total);
   
      average=total/5;              
    printf("The Average salary Of The Comapny is:Rs %d\n",average);



    return 0;

}




/* //Using For Loop
 #include<stdio.h>
int main()
{
    char emp[5];

    double salary[5];
    int salary_avg;
    int total_salary=0;
   
    
    for(int i=0;i<5;i++)
    {
    printf("Enter The First Name.\n");
    scanf("%s", &emp[i]);
    
  printf("Enter Your Salary in Numbers. \n");
  scanf("%lf",&salary[i]);
  total_salary = total_salary + salary[i];
 
    }
   
salary_avg = total_salary/5;
printf("The Total salary of all employees is %d ",total_salary);
printf("The Average Of Employess salary is %d ",salary_avg);

return 0;

    
}
 */
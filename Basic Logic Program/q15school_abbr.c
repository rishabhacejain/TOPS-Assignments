// Convert school’s name in abbreviated form
#include<stdio.h>
int main()
{
    char sch_fname[20],sch_mname[20],sch_lname[20];

    printf("Enter School Name:\t");
    scanf("%s %s %s",sch_fname,sch_mname,sch_lname);

    printf("The Abbreviated Name of %s %s %s is %c%c%c",sch_fname,sch_mname,sch_lname,sch_fname[0],sch_mname[0],sch_lname[0]);

    return 0;
    
}
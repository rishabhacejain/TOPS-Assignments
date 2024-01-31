/* Q15 Write a C program to determine eligibility for admission to a professional course based on the 
following criteria Eligibility Criteria : 
Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and 
Total in all three subject >=190 or Total in Maths and Physics >=140 
------------------------------------- 
Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 
Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible. */

#include<stdio.h>
int main()
{
    int P,C,M,PCM,PM;
    printf("Enter The Marks Obtained in Physics\n");
    scanf("%d",&P);
    printf("Enter The Marks Obtained in Chemistry\n");
    scanf("%d",&C);
    printf("Enter The Marks Obtained in Maths\n");
    scanf("%d",&M);

    if (M>=65)
    {
          if(P>=55)
        {
              if(C>=50)
              {
                if((P+C+M>=190)||(P+M>=140))
                {
                printf("The candidate is eligible for admission");
                }
                else
                printf("The candidate is not eligible for admission\n");
              }
              else
        printf("The candidate is not eligible for admission\n");
        }
        else
    printf("The candidate is not eligible for admission\n");
    }
    else
printf("The candidate is not eligible for admission\n");
      
  return 0;  
    
}


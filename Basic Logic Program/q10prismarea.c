// 10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main()
{
    int w,h,l;
    float area;
    printf("Enter the Width, Height and Length \n");
    scanf("%d""%d""%d",&w,&h,&l);
    area = 2*(w*l+h*l+h*w);
    printf("The area Of the  Rectangle Prism is %f",area);
    return 0;
}

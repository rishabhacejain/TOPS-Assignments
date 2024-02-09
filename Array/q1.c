#include<stdio.h>
 int main(){
   int n, arr[100];

    printf("How Many numbers you wish to enter\n");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("Enter Number %d:", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
        }
    }printf("Max number is %d\n",arr[0]);

     return 0;

 }
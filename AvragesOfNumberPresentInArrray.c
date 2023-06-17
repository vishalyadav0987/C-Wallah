#include<stdio.h>
int main()
{
    int i,n;
    float a[20],sum=0.0,Avg;
    printf("How Many Number You input Want :");
    scanf("%d",&n);
    printf("INPUT NUMBERS :\n");
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
        sum=sum+a[i];
         
    }
   Avg = sum/n;
    printf("Average of the number : %.2f",Avg);
 
     
}
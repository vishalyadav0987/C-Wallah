#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    printf("Enter 3rd Number : ");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("%d",a);
    }
    else if(b>a && b>c){
        printf("%d",b);
    }
    else if ((a=b)>c)
    {
        printf("%d ",a);
    }
    else if ((a=c)>b)
    {
        printf("%d ",a);
    }
    else if ((b=c)>a)
    {
        printf("%d ",b);
    }
    
    else{
        printf("%d",c);
    }
    
}
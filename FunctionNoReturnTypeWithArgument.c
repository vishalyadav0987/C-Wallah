#include<stdio.h>
void fun(int,int);
int main()
{
    int a,b;
    printf("Enter your 1st value : ");
    scanf("%d",&a);
    printf("Enter your 1st value : ");
    scanf("%d",&b);
    fun(a,b);
    return 0;
}
void fun(int x,int y)
{
    printf("a=x*b=y = %d",x*y);
}
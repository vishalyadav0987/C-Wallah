#include<stdio.h>
void fun();
int main()
{
    fun();
    return 0;
}
void fun()
{
    int a,b;
    printf("Enter your 1st value : ");
    scanf("%d",&a);
    printf("Enter your 1st value : ");
    scanf("%d",&b);
    printf("a*b = %d",a*b);
}
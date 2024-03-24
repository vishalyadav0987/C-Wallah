#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values = ");
    scanf("%d %d",&a,&b);
    // c =a>b?a:b;
    // printf("%d is greater",c);
    a>b?printf("%d is greater",a):printf("%d is greater",b); //True hogi toh a : false hogi toh b;
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your number : ");
    scanf("%d",&a);
    printf("Enter your number : ");
    scanf("%d",&b);
    switch (a)
    {
    case 3:
    printf("It is correct Number");
    switch (b)
    {
    case 4:
        printf("\nTure");
        break;
    
    default:
        break;
    }
        break;
    
    default :
    printf("It is correct Not Number");
        break;
    }
}
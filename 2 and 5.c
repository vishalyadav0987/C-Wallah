#include<stdio.h>
int main()
{
    int a;
    printf("Enter Your Number : ");
    scanf("%d",&a);
    if (a%2==0 && a%5==0){
        printf("%d is divisible by 2 and 5 ",a);
    }
    else{
        printf("Given %d number is not divisible 2 and 5",a);
    }
}
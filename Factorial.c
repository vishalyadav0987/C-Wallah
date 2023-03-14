#include<stdio.h>
int main()
{
    int a,i,sum=1 ;
    printf("ENTER YOUR FOR  Factorial : ");
    scanf("%d",&a);
    for (i=1;i<=a;){
        sum = sum * i;
        i++;
    }
    printf("%d",sum);
}
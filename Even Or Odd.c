#include<stdio.h>
int main()
{
    int Number ;
    printf("Enter your number : ");
    scanf("%d",&Number);
    if ("%d",Number==0){
        printf("%d Neither Even Nor Odd ",Number);
    }
    else if("%d",Number%2==0){
        printf("%d is Even ",Number);
    }
    else{
        printf("%d is odd ",Number);
    }
    return 0;
}
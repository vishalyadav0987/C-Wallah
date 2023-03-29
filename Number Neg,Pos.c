#include<stdio.h>
int main()
{
    int Number ;
    printf("Enter your number : ");
    scanf("%d",&Number);
    if ("%d",Number==0){
        printf("%d Neither Positive Nor Negative ",Number);
    }
    else if("%d",Number>0){
        printf("%d is  Postive",Number);
    }
    else{
        printf("%d is Negative ",Number);
    }
    return 0;
}
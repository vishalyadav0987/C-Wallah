#include<stdio.h>
int main()
{
    int n,count = 0;
    printf("Enter your number : ");
    scanf("%d",&n);
    while(n!=0){
       n /= 10;
        fflush(stdin);
       ++count;
    }

    if (count == 5){
        n % 10;
        printf("%d",n);
    }
    else{
        printf("Invalid number");
    }
}
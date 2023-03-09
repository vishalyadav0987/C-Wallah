#include<stdio.h>
int main()
{
    int Number;
    printf('Enter your number: ');
    scanf("%d",&Number);
    if (Number%5==0 && Number%11==0)
        printf("%d divisible by 5 and 11",Number);
    
    else
        printf("%d Not divisible by 5 and 11",Number);
    return 0;
}
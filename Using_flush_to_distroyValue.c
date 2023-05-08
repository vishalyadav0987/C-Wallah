#include<stdio.h>
int main()
{
    int a;
    char b;
    do{
       
        scanf("%d",&a);
        printf("%d",a);
        scanf("%c",&b);
fflush(stdin);
    }while(b=='y'||b=='Y');
}
//++x
//x++
#include<stdio.h>
int main()
{
    int a = 5;
    printf("%d\n",a); //5 5
    printf("%d\n",a++); //6  5
    printf("%d\n",++a); //6  7
    a++; 
    ++a;
    printf("%d\n",--a); //5 8
    printf("%d\n",a--); //5 8
    a--;
    printf("%d\n",a); //5 6
}
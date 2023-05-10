#include<stdio.h>
#include<string.h>
int main()
{
    int a=123; // int to strings
    char str[100];
    itoa(a,str,2); // it means string to integer....
    printf("\n Binary value : %s",str);
    itoa(a,str,10);
    printf("\n Decimal values : %s",str);
    itoa(a,str,16);
    printf("\n Hexadecimal values : %s",str);
    itoa(a,str,8);
    printf("\n Octadecimal values : %s",str);
}
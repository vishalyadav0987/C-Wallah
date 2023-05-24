#include<stdio.h>
int main()
{
    char a[100], str[100],c[100];
    scanf("%[^\n]%*c", a);
    scanf("%[^\n]%*c", str);
    scanf("%[^\n]%*c", c);
    printf("%s\n", a);
    printf("%s\n", str);
    printf("%s", c);
}
#include <stdio.h>
int main()
{
    int n, rev = 0, rem, tem;
    printf("Enter your Number: ");
    scanf("%d", &n);
    tem = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    printf("%d\n", rev);
    if (rev == tem)
    {
        printf("The Number is palindrome");
    }
    else
    {
        printf("The Number is not palindrome");
    }
}
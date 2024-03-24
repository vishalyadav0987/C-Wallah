#include <stdio.h>
void palindrome(int x)
{
    int rem, rev = 0, temp;
    temp = x;
    while (x > 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
    if (temp == rev)
    {
        printf("The Number is palindrome");
    }
    else
    {
        printf("The Number is not palindrome");
    }
}
int main()
{
    int n;
    printf("Enter your Number: ");
    scanf("%d", &n);
    palindrome(n);
}
<<<<<<< HEAD
#include <stdio.h>
int main()
{
    int a, n, sum = 0;
    int *p1 = &a;
    int *p2 = &n;
    int *p3 = &sum;
    scanf("%d", p2);
    while (n != 0)
    {
        *p1 = *p2 % 10;
        *p3 += *p1;
        *p2 /= 10;
    }
    printf("%d", *p3);
=======
#include <stdio.h>
int main()
{
    int a, n, sum = 0;
    int *p1 = &a;
    int *p2 = &n;
    int *p3 = &sum;
    scanf("%d", p2);
    while (n != 0)
    {
        *p1 = *p2 % 10;
        *p3 += *p1;
        *p2 /= 10;
    }
    printf("%d", *p3);
>>>>>>> aedc2c2a6caba5511dd9944d32a4514afbe21457
}
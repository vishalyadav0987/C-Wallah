#include <stdio.h>

int main()
{
    int i, n, t, j;
    printf("Enter how many no. you input want : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
<<<<<<< HEAD
        printf("%d ", a[i]);
=======
        printf("%d", a[i]);
>>>>>>> aedc2c2a6caba5511dd9944d32a4514afbe21457
    }
}
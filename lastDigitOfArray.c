#include <stdio.h>
int main()
{
    int i, n, l;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
  
    for (i = 0; i < n; i++)
    {
        l = a[i] % 10;
    }
    if (l % 10 == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
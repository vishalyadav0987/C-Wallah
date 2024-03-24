#include <stdio.h>

void update(int *a, int *b)
{
    int sum1;
    int sum2;
    sum1 = *a + *b;
    sum2 = *a - *b;
    *a = sum1;
    *b = abs(sum2);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

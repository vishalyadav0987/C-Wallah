#include <stdio.h>
void sum_of_two_Number(int *v, int *v1)
{
    int sum;
    int *p3 = &sum;
    *p3 = *v + *v1;
    printf("%d", *p3);
}
int main()
{
    int a, b;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("Enter your 1st Number : ");
    scanf("%d", p1);
    printf("Enter your 2nd Number : ");
    scanf("%d", p2);
    sum_of_two_Number(p1, p2);
}
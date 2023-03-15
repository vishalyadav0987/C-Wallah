#include<stdio.h>
int main()
{
    int i,a,b;
    printf("Kha Tak print karani hai : ");
    scanf("%d",&a);
    printf("Konsi Table print Karani hai : ");
    scanf("%d",&b);
    for (i=1; i<a; i++)
    {
        printf("%d * %d = %d\n",b,i,i*b);
    }
    return 0;
}
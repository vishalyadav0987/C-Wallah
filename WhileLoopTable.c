#include<stdio.h>
int main()
{
    int i=1,a,b;
    printf("Kha Tak print karani hai : ");
    scanf("%d",&a);
    printf("Konsi Table print Karani hai : ");
    scanf("%d",&b);
    while (i<a+1)
    {
        printf("%d * %d = %d\n",b,i,i*b);
        i++;
    }
    
}
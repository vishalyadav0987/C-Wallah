#include<stdio.h>
int main()
{
    int r;
float area;
float pi=3.14;
    int *p1 = &r;
    float *p2 = &area;
    float *p3 = &pi;
printf("Enter your Radius : ");
scanf("%d",p1);
*p2 = ((*p3) *(*p1) *(*p1));
printf("%.2f",*p2);
}


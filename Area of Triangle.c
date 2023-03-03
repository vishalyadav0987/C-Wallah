#include<stdio.h>
int main()
{
    float a,b,Area;
    printf("Enter the height of Triangle : ");
    scanf("%f",&a);
    printf("Enter the base of Triangle : ");
    scanf("%f",&b);
    //Area = 1/2 *a*b; // they evaluate 1/2 is 0 because both are integer value
    // Area = 0.5 *a*b; // correct
    Area = (a*b)/2; // correct
    // int c = 1/2;
    // Area = c*(a*b); // Notcorrect
    // Area = (float)1/(float)2*a*b; // correct
    printf("Area of Triangle is = %f",Area);
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a = "); // Modulus on work with integer dataType in C.
    scanf("%d",&a);
    // float b ; // then gives error
    printf("Enter the value of b = ");
    // scanf("%f",&b); // Error for these
     scanf("%d",&b);
    c = a%b;
    // printf("%f",c); // gives 0.000000 in %f
    printf("%d",c); 
    return 0;
}
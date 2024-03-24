#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int i;
    char x[] = "1000000";
    i = atol(x); // inbuilt string to long int
    printf("%ld",i);
}
// Relation operator in C
#include<stdio.h>
int main()
{
    int a = 5;
    int b = 7;
    // printf("a&b %d\n",a&b);  //5
    // printf("a|b %d\n",a|b);  //7
    // printf("a^b %d\n",a^b);  //2
    // printf("~a %d\n",~a);    //-6
    // printf("a<<b %d\n",25<<3);    //200
    // printf("a>>b %d\n",25>>3);    //3
    int d;
    d = a;
    a = b;
    b = d;
    printf("%d %d",a,b);
    return 0;
    
}
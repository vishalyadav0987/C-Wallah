#include<stdio.h>
int main()
{
    int a;
    short int b;
    long int c;
    unsigned short int g;
    char d;
    float e;
    double f;
    printf("int = %d\n",sizeof(a)); // sizeof is operator alaways in bytes
    printf("short int = %u\n",sizeof(b)); // %u is more operator
    printf("long int = %d\n",sizeof(c));
    printf("unsigned short int = %d\n",sizeof(g));
    printf("Char = %d\n",sizeof(d));
    printf("Float = %d\n",sizeof(e));
    printf("duoble = %d\n",sizeof(f));
}
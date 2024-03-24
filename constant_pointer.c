#include <stdio.h>
int main()
{
    int a = 1;
    int b = 45;
    int *const p = &a; // constant pointer inilaize in same line ..
    printf("%d %u %u\n", *p, p, &a);
    // p = &b; not allowed because inialize in same line..
    *p = 34; // modify the value of a;
    printf("%d %u ", *p, p);
}
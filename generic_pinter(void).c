#include <stdio.h>
int main()
{
    int a = 1;
    float b =4.5;
    char c = 'v';
    void *p;  // iniallize only one time 
    p=&c ;
    printf("%c\n",*(char*)p);  /// it is pointer type- casting
    p=&a;
    printf("%d\n",*(int*)p);
     p=&b;
    printf("%.1f\n",*(float*)p);
   
}
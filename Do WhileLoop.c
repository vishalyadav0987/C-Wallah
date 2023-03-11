#include<stdio.h>
int main()
{
    int i=0,a;
    printf("Enter any number : ");
    scanf("%d",&a);
    do
    {
        // i++; // 1,2,3,4,5,6
       printf("%d\n",i); 
       i++; // 0,1,2,3,4,5
    } while (i<a);
    return 0;

}
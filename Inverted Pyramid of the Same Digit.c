#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Range : ");
    scanf("%d",&a);
    for (i=0;i<a;i++){
        for (j=0;j<a-i;j++){
            printf(" *");
        }
        printf("\n");
    }
}
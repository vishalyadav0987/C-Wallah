#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Range : ");
    scanf("%d",&a);
    for (i=1;i<a+1;i++){
        for (j=0;j<i;j++){
            printf(" %d",i);
        }
        printf("\n");
    }
}
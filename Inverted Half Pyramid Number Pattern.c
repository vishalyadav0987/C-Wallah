#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Range : ");
    scanf("%d",&a);
    for (i=1;i<a+2;i++){
        for (j=0;j<i;j++){
            printf(" %d",j);
        }
        printf("\n");
    }
}
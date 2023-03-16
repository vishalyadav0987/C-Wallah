#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Range : ");
    scanf("%d",&a);
    for (i=1;i<a+1;i++){
        for (j=1;j<i+1;j++){
            printf(" %d",j);
        }
        printf("\n");
    }
}
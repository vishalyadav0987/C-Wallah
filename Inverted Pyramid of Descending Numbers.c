#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Range : ");
    scanf("%d",&a);
    for (i=1;i<a+1;i++){
        for (j=0;j<a+1-i;j++){  //RUKAWAT
            printf(" %d",i);
        }
        printf("\n");
    }
}
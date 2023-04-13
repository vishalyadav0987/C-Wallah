#include<stdio.h>
void deletionFun(int x[],int c)
{
    int pos,j;
    printf("Enter the position you delete :");
    scanf("%d",&pos);
    for(j=pos-1;j<c;j++){
        x[j]=x[j+1];
    }
    for(j=0;j<c-1;j++){
        printf("%d\t",x[j]);
    }
}
int main()
{
    int n,i;
    printf("How many number input you want : ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    deletionFun(a,n);
}
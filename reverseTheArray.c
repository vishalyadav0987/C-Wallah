#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){ 
        scanf(" %d",&a[i]);
    }
    
    for (j=n-1;j>=0;j--){
        printf("%d ",a[j]);
    }
}
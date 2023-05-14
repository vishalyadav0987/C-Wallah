#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],b[n][n],sum[n][n],i,j;
    for (i=0;i<n;i++){ 
        for(j=0;j<n;j++){
            scanf("%d",a[i][j]);
        }
    }   
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",b[i][j]);
        }
    } 
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d",sum[i][j]);
        }
    } 
}
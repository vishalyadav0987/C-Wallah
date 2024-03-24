#include<stdio.h> 
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter element\n");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            sum = sum + a[i][j];
            if(i==j){
               sum = sum + a[i][j]; 
            }
        }
        printf("\n");
    }
    printf("%d",a);
    printf("%d",sum);
    printf("%d",sum);
}
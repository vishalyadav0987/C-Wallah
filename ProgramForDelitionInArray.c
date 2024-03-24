#include<stdio.h>
int main()
{
    int a[10],pos,i,n;
    printf("Enter number of element in arry \n");
    scanf("%d",&n);
    printf("Enter %d element \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the location where you wish to delete");
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++){
       a[i]=a[i+1];
    }
    printf("Resultant aray is\n"); 
    for(i=0;i<n-1;i++){
        printf("%d\n",a[i]);
    }

}
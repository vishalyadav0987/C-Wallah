#include<stdio.h>
int main()
{
    int a[20],i,n,sum=0;
    printf("How Many Number You input Want :");
    scanf("%d",&n);
    printf("INPUT NUMBERS :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            sum=sum+a[i];
        } 
    }
 
    printf("Sum Of all number present in array : %d",sum);
    printf("\n%u",a); // it prints address of base array or starting index
     printf("\n%u\t%u",a+1,&a+1);
     
}
#include<stdio.h>
int main()
{
    int a[20],i,n,sum=0;
    printf("How Many Number You input Want :");
    scanf("%d",&n);
    printf("INPUT NUMBERS :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%3==0){
            sum=sum+i;
        }
    }
 
    printf("Number is prensent in array divisble by 3 : %d",sum);

     
}
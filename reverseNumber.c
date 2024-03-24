#include<stdio.h>
int main()
{
    int i,n,r,reverse = 0;
    printf("Enter how many input you wants : ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        r = n % 10 ;
        reverse = reverse * 10 + r;
        n = n / 10;
    }
    printf("%d",reverse);

}
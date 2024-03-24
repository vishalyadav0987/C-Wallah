#include<stdio.h>
void reverseNumber(int x)
{
    int i,r,reverse = 0;
 for (i=0;i<x;i++){
        r = x % 10 ;
        reverse = reverse * 10 + r;
        x = x / 10;
    }
    printf("%d",reverse);
}
int main()
{
    int n;
    printf("Enter how many input you wants : ");
    scanf("%d",&n);
   reverseNumber(n);

}

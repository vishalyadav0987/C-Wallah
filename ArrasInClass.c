#include<stdio.h>
int main()
{
    int a[20],i,n;
    printf("How Many Number You input Want :");
    scanf("%d",&n);
    printf("INPUT NUMBERS :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("OUTPUT NUMBER WITH THEIR ADDRESSES :\n");
      for(i=0;i<n;i++){
        printf("%d\t%u\n",a[i],&a[i]);
    }
    printf("\n%u",a); // it prints address of base array or starting index
     printf("\n%u\t%u",a+1,&a+1); 
     
}
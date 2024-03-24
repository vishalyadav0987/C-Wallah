#include<stdio.h>
int main()
{
    int i,n;
    float a[20],max=0.0;
    printf("How Many Number You input Want :");
    scanf("%d",&n);
    printf("INPUT NUMBERS :\n");
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);    
    }
max=a[0];
for(i=0;i<n;i++){
    if(max<a[i]){
        max=a[i];
    }
} 
    printf("Max Value :%f",max);

     
}
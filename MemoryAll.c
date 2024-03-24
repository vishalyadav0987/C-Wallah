#include<stdio.h>
#include<conio.h>
int main()
{
    int n, *p ,sum = 0,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    p = (int *)malloc(n*sizeof(int));  // dynamically memory allocation
    if (p==NULL){
        printf("not enough memory to allocate");
    }
    else{
        printf("enter the elements in array : \n");
        for(i=0;i<n;i++){
            scanf("%d",(p+i));
            sum +=*(p+i);
        }
        printf("Array elements are : \n ");
        for(i=0;i<n;i++){
            printf("%d\n",*(p+i));
        }
        printf("This is sum of using dyananmically memory allocation (%d)",sum);
    }
    free(p);
}
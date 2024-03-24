#include<stdio.h>
#include<stdlib.h>
main()
{
    int *p;
    int i,n1,n2;
    printf("Enter size");
    scanf("%d",&n1);
    p=(int *)malloc(n1*sizeof(int));
    if(p!=NULL){
        printf("Space is allocate :\n\n");
        printf("Enter the element : \n");
        for(i=0;i<n1;i++){
            scanf("%d",(p+i));
        }
        for(i=0;i<n1;i++){
            printf("%d",i);
        }
    }
}
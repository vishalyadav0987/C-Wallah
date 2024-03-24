#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Range : ");
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        for (j=1;j<=i;j++){
            // printf(" %d",j);
            printf(" %c",j+64);
        }
        printf("\n");
    }
}

// #include<stdio.h>
// int main()
// {
//     int i,j,a;
//     printf("Range : ");
//     scanf("%d",&a);
//     for (i=1;i<=a;i++){
//         for (j=1;j<=i;j++){
//             // printf(" %d",i);
//             printf(" %c",i+64);
//         }
//         printf("\n");
//     }
// }
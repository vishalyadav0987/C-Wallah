// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     char *n;
//     int no,len=0,i;
//     scanf("%d",&no);
//     n=(char*)malloc(no*sizeof(char));
//     fflush(stdin);
//     gets(n);
//     for(i=0;n[i]!='\0';i++){
//         len ++;
//     }
//     printf("%d",len);
//     free(n);
// }


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *n ="vishal";
    printf("%s",n);
    printf("%c",*(n+1)); // pointer not move in this case..
    n++;
    printf("%s",n);
}
#include<stdio.h>
#include<string.h>
int main()
{
    char a[15],b[15];
    int i=0,l;
    printf("enter first string \t");
    gets(a);
    l = strlen(a);
    for(i=0;i<l;i++){
        b[i]=a[i];
    }
    b[i]='\0';
    printf("\nCopied string is %s\n",b);
    return 0;
}
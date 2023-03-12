#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='U'||ch=='I'||ch=='O'){
        printf("%c is a Vowel",ch);
    }
    else{
        printf("%c is not vowel",ch);
    }
}
#include<stdio.h>
int main()
{
    int i,user_pos_add_iceCreame;
    char user_says;
    char user_inputIceCreame[10];
    char menu[15][30]={"Vanilla","Chocolate","Pistachio","Chocolate Chip","Coffee","Rocky Road","Cookies N' Cream","Chocolate Chip Cookie Dough","Butter Pecan","Neapolitan","Moose Tracks","Strawberry","Cookie Dough","Buttered Pecan","Cookies N' Cream"};
    printf("Enter 'Yes'= 'y' for showing list of Ice Creame : ");

    scanf("%c",&user_says);
    if ('y'==user_says||'Y'==user_says){
       for (i=0;i<15;i++){
        printf("%d %s\n",i+1,menu[i]);
       }
       printf("Plaese Enter the position you want add new Ice Creame : ");
       scanf("%d",&user_pos_add_iceCreame);
       printf("Enter Ice creame you want to add : ");
       scanf("%s",&user_inputIceCreame);
       for (i=14;i>=user_pos_add_iceCreame-1;i--){
        menu[i+1][30]=menu[i];
       }
       menu[user_pos_add_iceCreame-1][30]=user_inputIceCreame;
       for (i=0;i<15+1;i++){
        printf("%d %s\n",i+1,menu[i]);
       }
    }
 }
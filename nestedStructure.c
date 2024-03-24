#include <stdio.h>
struct student
{
    int rollno;
    char name[12];
    int regno;
    struct address
    {
        int houseno;
        char city[12];
    } ad;

} stu;
int main()
{
    printf("Enter your roll no : ");
    scanf("%d", &stu.rollno);
    printf("Enter your reg no : ");
    scanf("%d", &stu.regno);
    printf("Enter your name : ");
    fflush(stdin);
    gets(stu.name);
    printf("Enter your houseno : ");
    scanf("%d", &stu.ad.houseno);
    printf("Enter your Adress : ");
    fflush(stdin);
    gets(stu.ad.city);
    printf("Roll no is %d \n", stu.rollno);
    printf("Name is %s \n", stu.name);
    printf("Reg No is %d \n", stu.regno);
    printf("HOUSE No is %d \n", stu.ad.houseno);
    printf("City is %s \n", stu.ad.city);
}

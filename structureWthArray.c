#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int roll; 
    float cgpa;
} information[3];
int main()
{
    int i;
    // struct student information[3];
    for (i = 0; i < 3; i++)
    {
        printf("Enter your name :");
        scanf("%[^\n]%*c", information[i].name);
        // gets(information[i].name); // Taking string like this "vishal yadav"
        printf("Enter your roll :");
        scanf("%d", &information[i].roll);
        printf("Enter your cgpa :");
        scanf("%f", &information[i].cgpa);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\nYour name is %s ", information[i].name);
        printf("\nYour roll no is %d ", information[i].roll);
        printf("\nYour cpga is %.2f ", information[i].cgpa);
    }
}
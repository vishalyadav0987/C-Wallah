#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int roll;
    float cgpa;
} ; //vishal={"vishal",38,4.5},s={"yadav",38,4}; // 1st Method
int main()
{
    struct student vishal={"vishal",38,4.5};  // 2nd method  
    
    // struct student s={"yadav",38,4};
    struct student s;
    // strcpy(s.name,"yadav");
    // s.roll = 38;   // 3rd Method
    // s.cgpa = 4;
    //struct student vishal,s; // another way it is local 
    s = vishal ; // copy data one to another   1st method
    strcpy(s.name,vishal.name);  // 2nd method to copying
    s.roll = vishal.roll;
    s.cgpa = vishal.cgpa;
    // printf("Enter your name :");
    // scanf("%[^\n]%*c", vishal.name);
    // //gets(vishal.name); // Taking string like this "vishal yadav"
    // printf("Enter your roll :");
    // scanf("%d", &vishal.roll);
    // printf("Enter your cgpa :");
    // scanf("%f", &vishal.cgpa);
    printf("\nYour name is %s ", vishal.name);
    printf("\nYour roll no is %d ", vishal.roll);
    printf("\nYour cpga is %.2f ", vishal.cgpa);
     printf("\nYour name is %s ", s.name);
    printf("\nYour roll no is %d ", s.roll);
    printf("\nYour cpga is %.2f ", s.cgpa);
}


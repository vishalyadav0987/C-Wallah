#include <stdio.h>
struct struct1
{
    int age;
    char first_name[50];
    char last_name[50];
    int standard;
} s1;
int main()
{
    struct struct1 s1;
    scanf("%d", &s1.age);
    scanf("%s", s1.first_name);
    scanf("%s", s1.last_name);
    scanf("%d", &s1.standard);
    printf("%d %s %s %d", s1.age, s1.first_name, s1.last_name, s1.standard);
}

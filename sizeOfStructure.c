#include<stdio.h>
struct sizeOfStructure
{
    char name[50];
    int rollNo;
    float salary;
}SS;
int main()
{
    printf("size of char %d \n",sizeof(SS.name));
    printf("size of int %d \n",sizeof(SS.rollNo));
    printf("size of float %d \n",sizeof(SS.salary));
    printf("size of structure %u \n",sizeof(SS));
}

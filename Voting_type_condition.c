#include<stdio.h>
int main(){
    int a,b;
    b = 18;
    printf("Enter Your Age : ");
    scanf("%d",&a);
    if (a>=b)
    printf("Eligible for voting");
     // printf("vis"); //showing error becaus eit is a part of main()
    else
    printf("Not eligible");
}
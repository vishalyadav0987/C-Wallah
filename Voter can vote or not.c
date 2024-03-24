/* C program for Voter con Vote or not ??
 Usin If Else Lader in C */
#include<stdio.h>
int main()
{   
    int a,b;
    b = 18;
    printf("Enter Your Age : ");
    scanf("%d",&a);
    if (a<=0){
        printf("It is invalid Age");  // if single statement in their body can use or not of curley braces
    }
    else if (a>=60){
        printf("Your retired and keep rest");  // else should be written as after body statement
    }
    else if(a>=b){
        printf("You eligible for Voting");
    }
     else{
        printf("You are not eligible for Voting");
    }
    
}
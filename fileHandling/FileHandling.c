// write = "w"
// append = "a"

/* #include<stdio.h>
int main()
{
   char ch;
   FILE *ptr;
   ptr=fopen("vishal.txt","w");
   scanf("%c",&ch);
   fputc(ch,ptr);
   printf("record saved");
   fclose(ptr);
} */

// getche() using taking input character with space ....

/* #include <stdio.h>
#include <conio.h> // console input output // getche()
int main()
{
   char ch;
   FILE *ptr;
   ptr = fopen("vishal.txt", "w");
   printf("Enter your text and press . to end\n");
   ch = getche();
   while (ch != '.')
   {
      // scanf("%c",&ch);
      //  ch = getche(); // iis syntax se . save ho raha hai
      fputc(ch, ptr);
      ch = getche();
   }
   printf("\nrecord saved");
   fclose(ptr);
} */

// The content of the file...

/*#include<stdio.h>
#include<conio.h>
int main()
{
   char ch,ch1;
   FILE *ptr;
   ptr = fopen("vishal.txt", "w");
   printf("Enter your text and press . to end\n");
   ch = getche();
   while (ch != '.')
   {
      // scanf("%c",&ch);
      //  ch = getche(); // iis syntax se . save ho raha hai
      fputc(ch, ptr);
      ch = getche();
   }
   printf("\nrecord saved");
   fclose(ptr);
   ptr = fopen("vishal.txt", "r");
   printf("\nThe content of the file\n");
   // ch1 = fgetc(ptr);
   while(ch1!=EOF){
      printf("%c",ch1);
      ch1 =fgetc(ptr);
   }
}*/

// fetching data ...
// #include <stdio.h>
// #include <conio.h>
// int main()
// {

//    FILE *ptr;
//    char ch1;
//    ptr = fopen("vishal.txt", "r");
//    printf("The content of the file : \n");
//    ch1 = fgetc(ptr);

//    while (ch1 != EOF)
//    {
//       if (ch1 == 'a' || ch1 == 'e' || ch1 == 'i' || ch1 == 'o' || ch1 == 'u' || ch1 == 'A' || ch1 == 'E' || ch1 == 'U' || ch1 == 'I' || ch1 == 'O')
//       {

//          ch1 = fgetc(ptr);
//       }
//       printf("%c", ch1);
//    }
// }

/// only vowels store... 
#include <stdio.h>
#include <conio.h>
int main()
{
   char ch1;
   FILE *ptr;
   ptr = fopen("vishal.txt", "w");
   printf("Enter your text and press . to end\n");
   ch1 = getche();
   while (ch1 != '.')
   {
      // scanf("%c",&ch);
      //  ch = getche(); // iis syntax se . save ho raha hai ch = getche();
      {
         if (ch1 == 'a' || ch1 == 'e' || ch1 == 'i' || ch1 == 'o' || ch1 == 'u')
         {
            fputc(ch1, ptr);
         }
         ch1 = getche();
      }
         printf("\nrecord saved");
         fclose(ptr);
      
   }
}

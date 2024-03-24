#include <stdio.h>
#include <conio.h>
main()
{
    char ch, ch1;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("vishal.txt", "r");
    ptr2 = fopen("vishal1.txt", "w");
    ch1 = fgetc(ptr);
    while (ch1 != EOF)
    {
        fputc(ch1, ptr2);
        ch1 = fgetc(ptr);
    }
    fclose(ptr);
    fclose(ptr2);
}
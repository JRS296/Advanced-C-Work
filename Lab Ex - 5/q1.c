//Jonathan Rufus Samuel (20BCT0332)
//DA-5: q1 - Write a program to read a file and display its contents along with line numbers before each line.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    int i = 1;
    char ch;
    fp = fopen("File (a).txt", "r+");
    if (fp == NULL)
    {
        puts("\nFile can't be open");
        exit(1);
    }
    /*Line no. before first line*/
    printf("%d. ", i);
    i++;
    do
    {
        ch = fgetc(fp);
        if (ch == '.')
        {
            printf("%c", ch);
            if (fgetc(fp) == EOF)
                continue;

            /*Printing the line number*/
            printf("\n%d. ", i);

            i++;
            continue;
        }
        printf("%c", ch);
    } while (ch != EOF);
    fclose(fp);
    _getch();
    return 0;
}
// Jonathan Rufus Samuel (20BCT0332)
// DA-5: q2 - Write a program to copy the contents of one file to another, while doing so replace all lowercase characters with their equivalent uppercase characters.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("file1.txt", "r");
    if (fp1 == NULL)
    {
        puts("File does not exist..");
        exit(1);
    }
    fp2 = fopen("NEW FILE.txt", "w");
    if (fp2 == NULL)
    {
        puts("File does not exist..");
        fclose(fp1);
        exit(1);
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, fp2);
    }
    printf("\nFile successfully copied..");
    return 0;
}
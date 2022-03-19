// Name: Jonathan Rufus Samuel (20BCT0332) - 19.03.2022
// Q2 - Write a program to copy contents of one file to another, while doing so replace all lowercase
// characters to their equivalent uppercase characters.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2, *x;
    char ch;
    fp1 = fopen("hello.txt", "r");
    if (fp1 == NULL)
    {
        puts("File does not exist..");
        exit(1);
    }
    fp2 = fopen("target.txt", "w");
    x = fp2;
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
    printf("\nFile successfully copied");
    /*
    printf("\nDisplay File? [1/0]");
    int 
    scanf("%c", ch2);
    if (ch2 == 'y')
    {
        ch = fgetc(x);
        while (ch != EOF)
        {
            printf("%c", ch);
            ch = fgetc(x);
        }

        fclose(x);
    }
    else{
        exit(1);
    }
    */

    fclose(fp2);
    fclose(fp1);

    
    return 0;
}
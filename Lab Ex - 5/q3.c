// Jonathan Rufus Samuel (20BCT0332)
/*DA-5: q3 - Write a program to encrypt/decrypt a file using a substitution cipher: in this,
each character read from the source file is substituted by a corresponding
predetermined character and this character is written to the target file. For
example, if the character ‘A’ is read from the source file, and if we have
decided that every ‘A’ is to be substituted by ‘!’, then a ‘!’ would be written
to the target file in place of every ‘A’. Similarly, every ‘B’ would be
substituted by ‘5’ and so on.*/

#include <stdio.h>
#include <conio.h>

void main()
{ /* substitution cipher encryption */

    /* all vowels have been exchanged with first five ascii characters and
     every space has been converted to 6th ascii character */

    FILE *fp, *ft;
    char ch;

    clrscr();

    fp = fopen("data.txt", "r");
    ft = fopen("temp.txt", "w");

    if (fp == NULL)
    {
        printf("cannot open one of files!");
        exit();
    }

    while (1)
    {

        ch = fgetc(fp);

        if (ch == EOF)
            break;

        encrypt(&ch); /* function for encryption */

        fputc(ch, ft);
    }

    fclose(fp);
    fclose(ft);

    remove("data.txt");
    rename("temp.txt", "data.txt");

    printf("task completed!");
    getch();


    FILE *fp, *ft;
    char ch;

    fp = fopen("data.txt", "r");
    ft = fopen("temp.txt", "w");

    if (fp == NULL)
    {
        printf("cannot open one of files!");

        exit();
    }

    while (1)
    {

        ch = fgetc(fp);

        if (ch == EOF)
            break;

        decrypt(&ch); /* function for decryption */

        fputc(ch, ft);
    }

    fclose(fp);
    fclose(ft);

    remove("data.txt");
    rename("temp.txt", "data.txt");

    printf("task completed!");
    getch();
}

encrypt(char *c)
{

    if (*c == 'a')
    {
        *c = '!';
    }

    if (*c == 'e')
    {
        *c = '@';
    }

    if (*c == 'i')
    {
        *c = '#';
    }

    if (*c == 'o')
    {
        *c = '$';
    }

    if (*c == 'u')
    {
        *c = '%';
    }

    if (*c == ' ')
    {
        *c = '^';
    }

    return *c;
}

decrypt(char *c)
{

    if (*c == '!')
        *c = 'a';

    if (*c == '@')
        *c = 'e';

    if (*c == '#')
        *c = 'i';

    if (*c == '$')
        *c = 'o';

    if (*c == '%')
        *c = 'u';

    if (*c == '^')
        *c = ' ';

    return *c;
}
// Name: Jonathan Rufus Samuel (20BCT0332) - 19.03.2022
//Q3 - Write a program to encrypt/decrypt a file using a substitution ciper: in this each character read
//from the source file is substituted by a corresponding predetermined character and this
//character is written to the target file.
//For example, if character ‘A’ is read from the source file, and if we have decided that every ‘A’ is
//to be substituted by ‘!’, then a ‘!’ would be written to the target file in place of every ‘A’. 

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
        if (ch == 'A' || ch == 'a')
        {
            ch = '!';
            fputc(ch, fp2);
            continue;
        }
        fputc(ch, fp2);
    }
    printf("\nFile successfully Encrypted");
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
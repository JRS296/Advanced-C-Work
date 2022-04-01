// RAndom Access to File

/*
There is no need to read each record sequentially, if we want to
access a particular record. C supports these functions for random
access file processing
• fseek() - This function is used for seeking the pointer position in the file at the specified byte.
Syntax: fseek( file pointer, displacement, pointer position);

• ftell() - This function returns the value of the current pointer position in the file.
The value is count from the beginning of the file.

• rewind() - This function is used to move the file pointer to the beginning of the given file.
*/

#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    int n;
    fp = fopen("file1.txt", "r");
    if (fp == NULL)
        printf("file cannot be opened");
    else
    {
        printf("Enter value of n to read last ‘n’ characters");
        scanf("%d", &n);
        fseek(fp, n, 1);
        while ((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }
    }
    fclose(fp);
    getch();
}
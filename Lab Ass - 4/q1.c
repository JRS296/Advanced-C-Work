//Name: Jonathan Rufus Samuel (20BCT0332) - 19.03.2022
//Q1 - Write a program to read a file and display its contents along with line numbers before each line.

#include <stdio.h>
#include<stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fs; //File Pointer

    char ch;
    int i=1;
    fs=fopen("hello.txt","r");
    if(fs==NULL)
    {
        printf("can't open source file");
        exit(1);
    }
    printf("%d - ",i++);
    while(1)
    {
        ch=fgetc(fs);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
        if(ch=='\n')
        {
            printf("%d - ",i);
            i++;
        }
    }
    fclose(fs);
    return 0;
}

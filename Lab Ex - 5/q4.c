// Jonathan Rufus Samuel (20BCT0332)
// DA-5: q4 - Given a text file, write a program to create another text file deleting the words ‘a’, ‘the’, ‘an’ and replacing each one of them with a blank space.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

#define FOUND (strcmp(word, "a") == 0 || strcmp(word, "an") == 0 || strcmp(word, "the") == 0 || strcmp(word, "A") == 0 || strcmp(word, "An") == 0 || strcmp(word, "The") == 0)

void delart(char *);

int main()

{
    delart("Temp.txt");
    _getch();
    return 0;
}

void delart(char *file)
{
    FILE *fp, *nf;
    int i;
    char word[20];
    fp = fopen(file, "r+");
    nf = fopen("NEW FILE.txt", "w");
    if (fp == NULL)
    {
        puts("\nCannot open the file.\n");
        exit(1);
    }
    for (i = 0; 1; i++)
    {
        word[i] = fgetc(fp);
        if (word[i] == EOF)
            break;
        if (word[i] == ' ')
        {
            word[i] = '\0';
            if (FOUND)
            {
                /*Replacing the word with the space*/
                strcpy(word, " ");
                fputs(word, nf);
            }
            else
            {
                fputs(word, nf);
                fputc(' ', nf);
            }
            i = -1;
            /*After the loop ends, i increament by 1,
            so -1 becomes 0 and	next character saved
            in the word[0]*/
        }
    }
}
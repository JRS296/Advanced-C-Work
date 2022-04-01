#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("file_handle.c", "r");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    fclose(fp);
}

/*
fopen()
• fclose()
• fprintf()
• fscanf()
• fputc()
• fgetc()
• fputs()
• fgets()
• fseek()
• ftell()
• rewind()
*/

#include <stdio.h>
main() // fprintf()
{
    FILE *fp;
    fp = fopen("file1.txt", "w");
    fprintf(fp, "Advanced C Programming\n");
    fclose(fp);
}

#include <stdio.h>
int main() // fcanf()
{
    char b[255];
    FILE *fp;
    if ((fp = fopen("file1.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
    while (fscanf(fp, "%s", b) != EOF)
        printf("%s", b);
    fclose(fp);
    return 0;
}

#include <stdio.h>
main() // fputc()
{
    FILE *fp;
    fp = fopen("file1.txt", "w");
    fputc('a', fp);
    fclose(fp);
}

#include <stdio.h>
int main() // fgetc()
{
    FILE *fp;
    int c;
    fp = fopen("file1.txt", "r");
    while (1)
    {
        c = fgetc(fp);
        if (eof(fp))
        {
            break;
        }
        printf("%c", c);
    }
    fclose(fp);
    return (0);
}

#include <stdio.h>
#include <conio.h>
main() // fputs()
{
    FILE *fp;
    fp = fopen("file2.txt", "w");
    fputs("VIT UNIVERSITY", fp);
    fclose(fp);
    getch();
}

#include <stdio.h>
main() // fgets()
{
    FILE *fp;
    char text[300];
    fp = fopen("file2.txt", "r");
    printf("%s", fgets(text, 300, fp));
    fclose(fp);
    getch();
}



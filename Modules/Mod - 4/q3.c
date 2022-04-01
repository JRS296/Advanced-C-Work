// Error Handling
/*
stderr is an output stream typically used by programs to output error
messages or diagnostics to the console.

Few methods and variables
defined in error.h header file
can be used to point out
error using the return
statement in a function.
• in case of any error and a
global variable errno is set
with the error code

*/

#include <stdio.h>
#include <errno.h>
#include <string.h>
int errno;
int main() // pererror() and strerror()
{
    FILE *pf;
    int errnum;
    pf = fopen("file3.txt", "r");
    if (pf == NULL)
    {
        errnum = errno;
        fprintf(stderr, "Value of errno: %d\n", errno);
        perror("Error printed by perror");
        fprintf(stderr, "Error opening file: %s\n", strerror(errnum));
    }
    else
    {
        fclose(pf);
    }
    return 0;
}

#include <stdio.h>
int main() // ferror() - Errors in read and write operations
{
    FILE *fp;
    char c;
    fp = fopen("file.txt", "w");
    c = fgetc(fp);
    if (ferror(fp))
    {
        printf("Error in reading from file : file.txt\n");
    }
    clearerr(fp);
    if (ferror(fp))
    {
        printf("Error in reading from file : file.txt\n");
    }
    fclose(fp);
    return (0);
}

#include <stdio.h>
main() // feof() - It is used for checking whether an end of the file has been reached or not.
{
    FILE *fp;
    int i, n;
    fp = fopen("file4. txt", "w");
    for (i = 0; i <= 100; i = i + 10)
    {
        putw(i, fp);
    }
    fclose(fp);
    fp = fopen("file4. txt", "r");
    for (i = 0; i <= 100; i++)
    {
        n = getw(fp);
        if (feof(fp))
        {
            printf("reached end of file");
            break;
        }
        else
        {
            printf("%d", n);
        }
    }
    fclose(fp);
    return 0;
}
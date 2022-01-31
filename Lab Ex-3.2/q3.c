#include <stdio.h>
#include <string.h>
#include <q4_var.h>

int strlen(char str[])
{
    int i, len = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return (len);
}

int main()
{
    char ar1[150] = "If you fail, never give up because FAIL means “First Attempt in Learning. ";
    char ar2[150] = "All of us do not have equal talent. But, all of us have an equal opportunity to develop our talents. ";
    char ar3[150] = "Excellence is a continuous process & not an accident. ";
    char ar4[400] = "";

    int j=0;
    for (int i=0; i<strlen(ar1); i++)
    {
        ar4[j] = ar1[i];
        j++;
    }
    for (int i=0; i<strlen(ar2); i++)
    {
        ar4[j] = ar2[i];
        j++;
    }
    for (int i=0; i<strlen(ar3); i++)
    {
        ar4[j] = ar3[i];
        j++;
    }
    int x = strlen(ar4);
    ar4[x] = '\0';

    printf("Dr. A. P. J quotes follows: %s",ar4);
    char arr[400] = "";
    strcpy(ar4,arr);

    printf("\n %s", arr);
}
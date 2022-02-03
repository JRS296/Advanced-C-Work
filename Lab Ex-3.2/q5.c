//Name: Jonathan Rufus Samuel - 20BCT0332
//Advanced C Programming (ELA) Assignment - 2; Part-2 (Strings) - Q5

#include <stdio.h>
int strlen(char str[])
{
    int i, len = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return (len);
}

int wordcount(char str[])
{
    int i, len = 0;
    for (i = 0; i<strlen(str); i++)
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            len++;
        }
    }
    printf("%d", len);
    return (len);
}

int sentcount(char str[])
{
    int i, len = 0;
    for (i = 0; i<strlen(str); i++)
    {
        if(str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            len++;
        }
    }
    printf("%d", len);
    return (len);
}

int main()
{
    char arr[200];
    printf("Enter String: ");
    scanf("%[^\n]s",&arr);

    int a1 = strlen(arr);
    int a2 = wordcount(arr);
    int a3 = sentcount(arr);

    printf("\nString: %s", arr);
    printf("\nNumber of Words: %d", a2+1);
    printf("\nNumber of Sentences: %d", a3);
    printf("\nLength of String: %d", a1);
}
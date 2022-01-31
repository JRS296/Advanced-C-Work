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

int main()
{
    char str[100], c1 = ' ', c2;
    int i;

    printf("Enter  the string: ");
    scanf("%[^\n]s", &str);
    printf("Enter character to replace blankspace: ", c1);
    scanf("%s", &c2);
    printf("\nBefore replace: %s", str);

    for (i = 0; str[i]; i++)
    {
        if (str[i] == c1)
        {
            str[i] = c2;
        }
    }

    printf("\nAfter replace: %s", str);

    return 0;
}
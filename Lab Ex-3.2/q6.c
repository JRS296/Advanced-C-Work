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
    char str[150];
    int i, j;
    printf("Enter a string: ");
    scanf("%[^\n]s",&str);
    for (i = 0; str[i] != '\0'; ++i)
    {
        while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0'))
        {
            for (j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }
    printf("Resultant String: %s", str);
    return 0;
}
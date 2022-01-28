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
    char ar1[30];
    char ar2[30];
    printf("Enter string to be reversed: ");
    scanf("%[^\n]s", ar1);
    for (int i = strlen(ar1)-1, j=0; i >= 0 ; i--,j++)
    {
        ar2[j] = ar1[i]; //For some reason, keep getting an 'a' as the last character
    }
    printf("\nInitial String: %s", ar1);
    printf("\nReversed String: %s", ar2);
    return 0;
}
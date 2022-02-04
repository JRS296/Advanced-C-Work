// Name: Jonathan Rufus Samuel - 20BCT0332
// Advanced C Programming (ELA) Assignment - 2; Part-2 (Strings) - Q2 (Challenging Q's)
// Q: WAP to remove the duplicate characters from the given string, S and print the resultant string, RS
//(Hint: S  AabCaBcdEGzYz ,  AbCdEGzY

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
    char str[100];
    int i, j, k;

    printf("Enter a String:  ");
    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[j] == str[i] || str[j]-32 == str[i] || str[j] == str[i]-32)
            {
                for (k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
            }
        }
    }
    printf("\nThe Final String after Removing All Duplicates: %s ", str);
    return 0;
}
//Name: Jonathan Rufus Samuel - 20BCT0332
//Advanced C Programming (ELA) Assignment - 2; Part-2 (Strings) - Q1

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

int count(char c, char arr[])
{
    int count = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if(arr[i] == c)
        {
            count++;
        }
    }
    return (count);
}

int main()
{
    char st1[100];
    printf("Enter string to be checked: ");
    scanf("%[^\n]s", st1);
    printf("%s", st1);

    int max[2] = {0, 0};
    int min[2] = {9999, 0};

    for (int i = 0; i < strlen(st1); i++)
    {
        if (count(st1[i], st1) > max[0])
        {
            max[0] = count(st1[i], st1);
            max[1] = st1[i];
        }
        else if (count(st1[i], st1) < min[0])
        {
            min[0] = count(st1[i], st1);
            min[1] = st1[i];
        }
    }
    printf("\nMaximum number of Characters: %c - %d",max[1],max[0]);
    printf("\nMinimum number of Characters: %c - %d",min[1],min[0]);
}

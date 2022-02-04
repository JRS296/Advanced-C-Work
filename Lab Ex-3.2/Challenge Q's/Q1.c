// Name: Jonathan Rufus Samuel - 20BCT0332
// Advanced C Programming (ELA) Assignment - 2; Part-2 (Strings) - Q1 (Challenging Q's)
// Q: Write a program to find the number of times a given word 'the” appears in the given string “Best brain
// of the nation may be found in the last benches of the classroom”.

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

int wordcount(char x[], char y[])
{
    int i, j, found, count;
    int stringLen, searchLen;

    stringLen = strlen(x); // length of string
    searchLen = strlen(y); // length of word to be searched

    count = 0;

    for (i = 0; i <= stringLen - searchLen; i++)
    {
        found = 1;
        for (j = 0; j < searchLen; j++)
        {
            if (x[i + j] != y[j])
            {
                found = 0;
                break;
            }
        }
        if (found == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100], st2[100];
    int count;
    printf("Enter string: ");
    gets(str);
    printf("Enter word to be searched: ");
    gets(st2);
    count = wordcount(str, st2);
    printf("Total occurrences of '%s': %d", st2, count);
    return 0;
}
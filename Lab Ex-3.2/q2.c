//Name: Jonathan Rufus Samuel - 20BCT0332
//Advanced C Programming (ELA) Assignment - 2; Part-2 (Strings) - Q2

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
    int i=0;
    while(ar2[i]!='@')
    {
        if(ar2[i]=='@')
            break;
        printf("%s",ar2[i]);
        i++;
    }
    return 0;
}
//Name: Jonathan Rufus Samuel - 20BCT0332
//Advanced C Programming (ELA) Assignment - 2; Part-2 (Strings) - Q4

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
    char arr[400] = "If you fail, never give up because FAIL means First Attempt in Learning. All of us do not have equal talent. But, all of us have an equal opportunity to develop our talents. Excellence is a continuous process & not an accident. ";
    printf("%s", arr);

    int count[5] = {0,0,0,0,0};

    for (int i = 0; i < strlen(arr); i++)
    {
        char ch = arr[i];
        switch (ch)
        {
        case ',':
            count[0]++;
            break;

        case '!':
            count[1]++;
            break;

        case '?':
            count[2]++;
            break;

        case '.':
            count[3]++;
            break;

        case ';':
            count[4]++;
            break;

        default:
            break;
        }
    }

    printf("\nSpecial Character Frequency: ");
    printf("\n1) ' - %d", count[0]);
    printf("\n2) ! - %d", count[1]);
    printf("\n3) ? - %d", count[2]);
    printf("\n4) . - %d", count[3]);
    printf("\n5) ; - %d", count[4]);
}
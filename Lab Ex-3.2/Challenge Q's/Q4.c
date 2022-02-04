// Name: Jonathan Rufus Samuel - 20BCT0332
// Advanced C Programming (ELA) Assignment - 2; Part-2 (Strings) - Q4 (Challenging Q's)
// Q: WAP to insert a substring anywhere in between the given string except in the first and last position of
// the string. Finally display the resultant string on inserting the sub-string.

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

void main()
{
    char a[30];
    char b[30];
    char c[50];
    int p = 0, r = 0, i = 0;
    int t = 0;
    int x, g, s, n, o;

    puts("Enter the First String:");
    gets(a);
    puts("\nEnter the Second String:");
    gets(b);
    printf("\nEnter the position where the item has to be inserted: ");
    scanf("%d", &p);
    r = strlen(a);
    n = strlen(b);
    i = 0;

    // Copying the input string into another array
    while (i <= r)
    {
        c[i] = a[i];
        i++;
    }
    s = n + r;
    o = p + n;

    // Adding the sub-string
    for (i = p; i < s; i++)
    {
        x = c[i];
        if (t < n)
        {
            a[i] = b[t];
            t = t + 1;
        }
        a[o] = x;
        o = o + 1;
    }

    printf("\nResultant String: %s", a);
}
//Name: Jonathan Rufus Samuel - 20BCT0332
//Advanced C Programming (ELA) Assignment - 2; Part-2 (Strings) - Q3 (Challenging Q's)
//Q: WAP to remove all characters from the given string except the alphabet character and display the final
//string (without using the second string) 
//(Hint: input: C-*O123V^&I@#D, output: COVID 

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
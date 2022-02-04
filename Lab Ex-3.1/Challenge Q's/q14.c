//Name: Jonathan Rufus Samuel - 20BCT0332
//Advanced C Programming (ELA) Assignment - 2; Part-1 (Arrays) - Q14 (Challenging Q's)
//Q: WAP to find all the patterns of 0(2+)0 in a given string. Given a string containing 0’s and 2’s. Find the total number of 0(2+)0 patterns in the string and output it.
//Hint: Input: 02202222020
//Output is 3 (Since patterns are 0220, 022220, 020)

//Basically, regex in C

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

int pattern(char str[])
{
    char last = str[0];
 
    int i = 0, counter = 0;
    while (i < strlen(str))
    {
        if (str[i] == '2' && last == '0')
        {
            while (str[i] == '2')
            {
                i++;
            }
            if (str[i] == '0')
            {
                counter++;
            }
        }
        last = str[i];
        i++;
    }
    return counter;
}
 
/* Driver Code */
int main()
{
    char str[50] = "1001ab010abc01001";
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Number of instances of pattern 0(2+)0 are: %d", pattern(str));
    return 0;
}
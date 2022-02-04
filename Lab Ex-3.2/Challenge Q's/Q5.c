//Name: Jonathan Rufus Samuel - 20BCT0332
//Advanced C Programming (ELA) Assignment - 2; Part-2 (Strings) - Q5 (Challenging Q's)
//Q: WAP to reverse words in the given strings and display the reversed string: (HINT: Input, s  “Programming is my hobby” Ouput, s  “hobby my is Programming)” 

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

void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}
 
// Function to reverse words*/
void reverseWords(char* s)
{
    char* word_begin = s;
 
    // Word boundary
    char* temp = s;
 
    // Reversing individual words as
    // explained in the first step
    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
 
    // Reverse the entire string
    reverse(s, temp - 1);
}
 
int main()
{
    char s[30];
    printf("Enter string to be reversed: ");
    scanf("%[^\n]s", s);
    char* temp = s;
    reverseWords(s);
    printf("Reversed String: %s", s);
    return 0;
}
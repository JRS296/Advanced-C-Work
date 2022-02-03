//Name: Jonathan Rufus Samuel - 20BCT0332
//Advanced C Programming (ELA) Assignment - 2; Part-2 (Strings) - Q7

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c2, str[100];
    int i=0,countspace=0;;
    printf("Enter  the string: ");
    scanf("%[^\n]s", &str);
    printf("Enter character to replace blankspace: ", c2);
    scanf("%s", &c2);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            str[i]= c2;
            continue;
        }
        i++;
    }
    printf("\nNew String: %s",str);
    return 0;
}
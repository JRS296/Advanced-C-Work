//Jonathan Rufus Samuel (20BCT0332)
/*DA-5: q7 - Write down macro definitions for the following:
1. To test whether a character entered is a small case letter or not.
2. To test whether a character entered is an upper case letter or not.
3. To test whether a character is an alphabet or not. Make use of the
macros you defined in (1) and (2) above.
*/

#include <stdio.h>

#define isUPPER(ch) (ch >= 'A' && ch <= 'Z')
#define isLOWER(ch) (ch >= 'a' && ch <= 'z')
#define isALPHABET(ch) (isUPPER(ch) || isLOWER(ch))
#define BIGGEST(a, b) ((a > b) ? printf("%d is the biggest\n", a) : printf("%d is the biggest\n", b))

int main()
{
    int a, b, repeat;
    char ch, choice;

    do
    {
        printf("1. Check if entered character is upper or lower case\n");
        printf("2. Check if entered character is alphabet or not\n");
        printf("3. Find biggest of 2 numbers\n");

        printf("\nEnter your choice\n");
        scanf(" %c", &choice);

        switch (choice)
        {
        case '1':
            printf("\nEnter a character\n");
            scanf(" %c", &ch);

            if (isUPPER(ch))
            {
                printf("Entered character is upper case letter\n");
            }
            else if (isLOWER(ch))
            {
                printf("Entered character is lower case letter\n");
            }
            else
            {
                printf("Please enter a valid alphabet\n");
            }

            break;
        case '2':
            printf("\nEnter a character\n");
            scanf(" %c", &ch);

            if (isALPHABET(ch))
            {
                printf("Entered character is an alphabet\n");
            }
            else
            {
                printf("Entered character is not an alphabet\n");
            }
            break;
        case '3':
            printf("\nEnter 2 numbers\n");
            scanf("%d%d", &a, &b);

            BIGGEST(a, b);

            break;
        default:
            printf("\nPlease enter valid choice\n");
        }

        printf("\n\nDo you want to continue? Ans: 0 or 1\n");
        scanf("%d", &repeat);

        printf("\n");
        fflush(stdin);

    } while (repeat);

    return 0;
}
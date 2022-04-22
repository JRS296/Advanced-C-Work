//Jonathan Rufus Samuel (20BCT0332)
/*DA-5: q6 - Write down macro definitions for the following:
1. To find the arithmetic mean of two numbers.
2. To find the absolute value of a number.
3. To convert an uppercase alphabet to lowercase.
4. To obtain the bigger of two numbers.*/

#include <stdio.h>

#define MEAN(a, b) ((a + b) / 2.0)
#define ABS(num) ((num > 0) ? num : (num * -1))
#define LOWER(ch) (ch + 32)
#define BIGGEST(a, b, c) ((a > b && a > c) ? a : ((b > c) ? b : c))

int main()
{
    int choice, num, repeat;
    float a, b, c;
    char ch;

    do
    {
        printf("1. Find Arithmetic Mean of 2 numbers\n");
        printf("2. Find Absolute Value of a number\n");
        printf("3. Convert a Uppercase letter to lowercase\n");
        printf("4. Find Biggest of 3 numbers\n");

        printf("\nEnter your choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter 2 numbers\n");
            scanf("%f%f", &a, &b);
            printf("Arithmetic Mean: %0.2f\n", MEAN(a, b));
            break;
        case 2:
            printf("Enter a integer number\n");
            scanf("%d", &num);
            printf("Absolute value of |%d| is %d\n", num, ABS(num));
            break;
        case 3:
            printf("Enter a uppercase alphabet\n");
            fflush(stdin);
            scanf("%c", &ch);

            if (ch >= 65 && ch <= 90)
                printf("To Lowercase: %c\n", LOWER(ch));
            else
                printf("Enter a valid uppercase alphabet\n");

            break;
        case 4:
            printf("Enter 3 numbers\n");
            scanf("%f%f%f", &a, &b, &c);
            printf("Biggest no is %0.2f\n", BIGGEST(a, b, c));
            break;
        default:
            printf("Please enter valid choice\n");
        }

        printf("\nDo you want to continue? Ans: 0 or 1\n");
        scanf("%d", &repeat);

        printf("\n");

    } while (repeat);

    return 0;
}
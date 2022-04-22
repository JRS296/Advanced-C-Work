//Jonathan Rufus Samuel (20BCT0332)
/*DA-5: q8 - Create an enumerated data type logical with TRUE and FALSE values.
write a program to check whether the entered number is prime or not
prime. if the number is prime display 0 otherwise 1. use enumerated
datatype*/

#include <stdio.h>

typedef enum
{
    true,
    false
} BOOLEAN;

int main()
{

    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    BOOLEAN x = true;
    // 0 and 1 are not prime numbers
    // change flag to 1 for non-prime number
    if (n == 0 || n == 1)
        x = false;

    for (i = 2; i <= n / 2; ++i)
    {

        // if n is divisible by i, then n is not prime
        // change flag to 1 for non-prime number
        if (n % i == 0)
        {
            x = false;
            break;
        }
    }
    
    // flag is 0 for prime numbers
    if (x == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}
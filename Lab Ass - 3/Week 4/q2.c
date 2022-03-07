//Q2 - A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.
//Example: prime factors of 24 are 2,2,2 and 3

#include<stdio.h>

int primeno(int x)
{
    int a;
    printf("Prime factors for %d are as follows: \n",x);
    for(a=2;a<=x;a++)
    {
        if(x%a==0)
        {
            printf("%d, ",a);
            x = x/a;
            a--;
        }
    }
}

void main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    primeno(num);
}


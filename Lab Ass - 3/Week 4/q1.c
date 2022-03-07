//Q1 - Write a function to convert any given year into its roman equivalent. Use these roman equivalents for
//decimal numbers: 1-I, 5-V, 10-X,50-L, 100-C, 500-D, 1000-M
//Example:
//Roman equivalent of 1988 is MDCCCCLXXXVIII

#include<stdio.h>

void roman(int year)
{
    if(year>=1000)
    {
        printf("M");
        roman(year-1000);
    }
    else if(year>=500)
    {
        printf("D");
        roman(year-500);
    }
    else if(year>=100)
    {
        printf("C");
        roman(year-100);
    }
    else if(year>=50)
    {
        printf("L");
        roman(year-50);
    }
    else if(year>=10)
    {
        printf("X");
        roman(year-10);
    }
    else if(year>=5)
    {
        printf("V");
        roman(year-5);
    }
    else if(year>=1)
    {
        printf("I");
        roman(year-1);
    }
}

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    roman(year);
    return 0;
}


//Name: Jonathan Rufus Samuel - 20BCT0332
//Advanced C Programming (ETH) Exercise 1 - qb.c - 26.02.2022

/*
b. Write a function that compares two given dates. To store a date use a structure that contains
three members namely day, month and year. If the dates are equal the function should
return 0, otherwise it should return 1.
*/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
struct date
{
    int day;
    int month;
    int year;
};

bool compare(struct date a, struct date b)
{

    if ((a.day == b.day) && (a.month == b.month) && (a.year == b.year))
    {
        printf("EQUAL\n");
        return true;
    }
    else
    {
        printf("UN-EQUAL\n");
        return false;
    }
}

void main()
{
    struct date d1, d2;
    printf("Enter first date(dd/mm/yyyy): \n");
    scanf("%d%d%d", &d1.day, &d1.month, &d1.year);
    printf("Enter second date(dd/mm/yyyy): \n");
    scanf("%d%d%d", &d2.day, &d2.month, &d2.year);

    bool ans = compare(d1,d2); //Unnecessary but eh
}
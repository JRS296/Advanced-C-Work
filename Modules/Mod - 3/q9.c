// Enumeration in C

#include <stdio.h>
enum week
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
int main()
{
    // creating today variable of enum week type
    enum week today;
    today = Wednesday;
    printf("Day %d", today + 1);
    return 0;
}

/*
Enumeration (or enum) is a user defined data type in C. It is mainly used to assign names to
integral constants, the names make a program easy to read and maintain.
*/
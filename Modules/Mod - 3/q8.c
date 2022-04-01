// Bits in C

#include <stdio.h>
#include <string.h>
struct
{
    unsigned int age : 3;
} Age;
int main()
{
    Age.age = 4;
    printf("Sizeof( Age ) : %d\n", sizeof(Age));
    printf("Age.age : %d\n", Age.age);
    Age.age = 7;
    printf("Age.age : %d\n", Age.age);
    Age.age = 8;
    printf("Age.age : %d\n", Age.age);
    return 0;
}

/*
In C, you can state the size of your structure (struct) or union members in the form of bits.
This concept is to because of efficiently utilizing the memory when you know that your
amount of a field or collection of fields is not going to exceed a specific limit or is in-between
the desired range.
if you need a variable to store a value from 0 to 7, then you can
define a bit field with a width of 3 bits as follows −
*/
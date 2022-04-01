// Predefined Macros Names

/*
Predefined macro names
___LINE___ It contains a current line number as a
decimal constant.
___FILE___ It contains the current filename as a
string literal.
___DATE___ It shows the current date as a character
literal in the “MMM DD YYYY” format.
___TIME___ It shows the current time as a character
literal in “HH:MM:SS” format.
___STDC___ It is defined as 1 when the compiler
complies with the ISO standard.
___TIMESTAMP___ It is a string literal in the form of “DDD
MM YYYY Date HH:MM:SS”. It is used
to specify the date and time of the last
modification of the current source file.
*/

#include <stdio.h>
main()
{
    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Timestamp :%s\n", __TIMESTAMP__);
    printf("STDC :%d\n", __STDC__);
    printf("STDC version :%d\n", __STDC_VERSION__);
    printf("Line :%d\n", __LINE__);
}

#include <stdio.h>
#define MAX(x, y) ((x) > (y) ? (x) : (y)) // Parameterized Macros
int main(void)
{
    printf("Max between 20 and 10 is %d\n",
           MAX(10, 20));
    return 0;
}

#define message() \
    printf("Good Morning\n") // Function Macros - macro continuation operator to continue a macro that is too long for a single line

#include <stdio.h> //Nested Macros
#define SQUARE(x) ((x) * (x))
#define CUBE(x) (SQUARE(x) * (x))
#define FOURTH_POWER(x) (CUBE(x) * (x))
#define FIFTH_POWER(x) (FOURTH_POWER(x) * (x))
int main()
{
    printf("%d", FIFTH_POWER(5));
    return 0;
}

// A token passed to macro can be converted to a string literal by using # before it.
#include <stdio.h>
#define get(a) #a
int main()
{
    // GeeksQuiz is changed to "GeeksQuiz"
    printf("%s", get(GeeksQuiz));
}

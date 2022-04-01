//Typedef in C

#include <stdio.h>
int main()
{
    typedef unsigned int unit;
    unit i, j;
    i = 10;
    j = 20;
    printf("Value of i is :%d", i);
    printf("\nValue of j is :%d", j);
    return 0;
}

/*
You can use typedef to give a name to your user defined data types as well. For example, you
can use typedef with structure to define a new data type and then use that data type to define
structure variables directly as follows −

typedef struct Books {
 char title[50];
 char author[50];
 char subject[100];
 int book_id;
} Book;
*/
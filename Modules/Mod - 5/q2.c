// Conditional Compilation

/*
• The #if directive, with the #elif,
#else, and #endif directives,
controls compilation of portions
of a source file.
• If the expression you write(after
the #if) has a nonzero value, the
line group immediately following
the #if directive is kept in the
translation unit.
*/

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
#if 5 > 10
    printf("Sum %d", a + b);
#else
    if (a == b)
        printf("Equals");
    else if (a > b)
        printf("Biggest number %d", a);
    else
        printf("Biggest number %d", b);
#endif
    return 0;
}

// #undef - To undefine a macro means to cancel its definition. This is done with the #undef directive.
// #error - The #error preprocessor directive indicates error. The compiler gives fatal errorif #error directive is found and skips further compilation process

/* 
Macros Vs enums
• Macros:
• Macros can be of any type. Macros can even be any code block containing
statements, loops, function calls etc.
• Macros are expanded by the pre-processor before compilation takes place.
Compiler will refer error messages in expanded macro to the line where the
macro has been called.
• Enum:-
• Enumeration is a type of integer.
• Enums follow scope rules.
• Enum variables are automatically assigned values
*/
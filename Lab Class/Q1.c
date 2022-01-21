#include <stdio.h>

int main()
{
    int rad;
    float pi = 3.14, area, c;
    printf("\nEnter radius of circle: ");
    scanf("%d", &rad);
    area = pi * rad * rad;
    printf("\nArea of circle : %f ", area);
    c = 2 * pi * rad;
    printf("\nCircumference : %f ", c);
    return (0);
}
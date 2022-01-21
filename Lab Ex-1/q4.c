#include<stdio.h>

int main()
{
    int l, b, r;
    printf("Enter length and breadth of Rectangle: \n");
    scanf("%d %d",&l, &b);
    printf("Enter radius of Circle: ");
    scanf("%d", &r);
    printf("\nArea of Rectangle: %d", l*b);
    printf("\nPerimeter of Rectangle: %d", 2*(l+b));
    printf("\nArea of Circle: %.2f", 3.14*r*r);
    printf("\nPerimeter of Circle: %.2f", 2*3.14*r);
}
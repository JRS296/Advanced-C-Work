#include<stdio.h>

void f(int *p, int *q)
{
    p = q;
    *p = 5;

}

int i=3,j=6;
int main()
{
    f(&i, &j);
    printf("%d %d",i,j);
    return 0;
}
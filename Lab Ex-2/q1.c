#include <stdio.h>

int main()
{
    float s1,s2,s3,g,sum;
    printf("Enter the THREE sides of a Triangle to check if it's valid or not: \n");
    scanf("%f %f %f", &s1, &s2, &s3);
    g = ((s1 > s2)? ((s1>s3)? s1:s3) : ((s2>s3)? s2:s3));
    if (g==s1)
    {
        sum = s2+s3;
    }
    else if (g==s2)
    {
        sum = s1+s3;
    }
    else if (g==s3)
    {
        sum = s2+s1;
    }

    if(g<sum)
    {
        printf("It is a Triangle");
    }
    else{
        printf("It is NOT a Triangle");
    }
}
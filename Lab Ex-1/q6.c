#include<stdio.h>
#include<math.h>

int main()
{
    float wef, t, v;
    printf("Enter temperature and wind velocity: \n");
    scanf("%f %f",&t, &v);
    wef = 35.74 + (0.6215*t) + ((0.4275*t) - 35.75) * pow(v,0.16);

    printf("\nWind Chill Factor: %.2f", wef);
}
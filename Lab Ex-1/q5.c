#include<stdio.h>
#include<math.h>

int main()
{
    float L[2], G[2], D,D1;
    for(int i=0; i<2; i++)
    {
        printf("Enter Latitude and Longitude of City %d: ",i+1);
        scanf("%f %f",&L[i],&G[i]);
    }
    D = 3969 * acos(D1);
    D1 = (sin(L[0])*sin(L[1]))+(cos(L[0])*cos(L[1])*cos(G[1]-G[0]));
    printf("Distance between two cities in units D: %.2f",D);
}
#include<stdio.h>
#include<math.h>

int main()
{
    float angle,ans;
    printf("Enter angle for checking: \n");
    scanf("%f", &angle);
    ans = pow(sin(angle),2)+pow(cos(angle),2);
    if(ans == 1)
    {
        printf("It is equal to 1");
    }
    else{
        printf("It is NOT equal to 1");
    }
}
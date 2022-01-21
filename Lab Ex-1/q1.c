#include <stdio.h>

int main()
{
    float sal,DA,HR,GS;
    printf("Enter Basic Slary: ");
    scanf("%f", &sal);
    DA = sal*0.2;
    HR = sal*0.2;
    GS = sal - DA - HR;
    printf("\nGross Salary: %.4f", GS);
    printf("\nHouse Rent: %.2f", HR);
    printf("\nDearness Allowance: %.2f", DA);
}
#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int series1(int n)
{
    int term = 1,sum = 0, m=n;
    do 
    {
        sum+=term;
        term+=2;
        n--;
    }
    while(n>=1);
    printf("Sum of series 1 for %d terms: %d\n\n", m, sum);
    return 0;
}

int series2(int n)
{
    int term = 1,sum = 0, m=n;
    for(int i=n; i>=1; i--)
    {
        term = i;
        term*=term;
        sum+=term;
        
    }
    printf("Sum of series 2 for %d terms: %d\n\n", m, sum);
    return 0;
}

int series3(int n, int x)
{
    int sum = 0,m=n;
    while(n>=1)
    {
        sum+=(pow(x,n)/factorial(n));
        n--;
    }
    printf("Sum of series 3 for %d terms: %d\n\n", m, sum);
    return 0;
}

int main()
{
    int choice = 0,value,expr;
    while (choice != 4)
    {
        printf("Enter 1 for series 1 (Do-While Loop)\n");
        printf("Enter 2 for series 2 (For Loop)\n");
        printf("Enter 3 for series 3 (While Loop)\n");
        printf("Enter 4 to exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: 
            printf("Enter n value: \n");
            scanf("%d", &value);
            series1(value);
        break;
        
        case 2: 
            printf("Enter n value: \n");
            scanf("%d", &value);
            series2(value);
        break;

        case 3: 
            printf("Enter n and x value: \n");
            scanf("%d %d", &value, &expr);
            series3(value,expr);
        break;

        case 4: 
            choice = 4;
        break;

        default:
            printf("Wrong choice! Try again...\n");
            continue;
        }
    }
}


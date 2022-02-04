// Name: Jonathan Rufus Samuel - 20BCT0332
// Advanced C Programming (ELA) Assignment - 2; Part-1 (Arrays) - Q12 (Challenging Q's)
// Q: WAP to find the maximum element in a given row and minimum element in a given column for a given matrix

#include <stdio.h>

int main()
{

    int a[20][20], i, j = 0, r, max[10],min[10], c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of column: ");
    scanf("%d", &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Element for - Row: %d Col: %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        max[i] = a[i][j];
        for (j = 0; j < c; j++)
        {
            if (a[i][j] > max[i])
            {
                max[i] = a[i][j];
            }
        }
    }
    for (i = 0; i < c; i++)
    {
        min[i] = a[i][j];

        for (j = 0; j < r; j++)
        {
            if (a[i][j] < min[i])
            {
                min[i] = a[i][j];
            }
        }
    }

    for (i = 0; i < r; i++)
    {
        printf("\nMaximum element from %d row is:%d", i, max[i]);
    }
    printf("\n");
    for (i = 0; i < c; i++)
    {
        printf("\nMinimum element from %d column is:%d", i, min[i]);
    }
    
}
// Name: Jonathan Rufus Samuel - 20BCT0332
// Advanced C Programming (ELA) Assignment - 2; Part-1 (Arrays) - Q11 (Challenging Q's)
// Q: WAP to find the product of boundary elements of a given matrix.

#include <stdio.h>

int main()
{
    int m, n;
    int a[20][20];
    printf("Enter number of rows & columns for matrix: \n");
    scanf("%d %d", &m, &n);

    printf("Enter values for Matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element for - Row: %d Col: %d: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    int pro = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
            {
                pro += a[i][j];
            }
            else if (i == m - 1)
            {
                pro += a[i][j];
            }
            else if (j == 0)
            {
                pro += a[i][j];
            }
            else if (j == n - 1)
            {
                pro += a[i][j];
            }
        }
    }
    printf("Product of Boundary Elements: %d", pro);
    return 0;
}
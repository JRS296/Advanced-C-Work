//Name: Jonathan Rufus Samuel - 20BCT0332
//Advanced C Programming (ELA) Assignment - 2; Part-1 (Arrays) - Q8

#include <stdio.h>

int main()
{
    int arr1[5][5];
    int arr2[5][5];
    int arr3[5][5];
    int m, n;
    printf("Enter number of rows & columns for matrix: \n");
    scanf("%d %d", &m, &n);

    printf("Enter values for Matrix - 1: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element for - Row: %d Col: %d: ",i,j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter values for Matrix - 2: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element for - Row: %d Col: %d: ",i,j);
            scanf("%d", &arr2[i][j]);
            arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
    }

    printf("Sum of two Matrices: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d    ",arr3[i][j]);
        }
        printf("\n");
    }
}
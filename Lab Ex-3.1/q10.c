#include <stdio.h>

int main()
{
    int arr1[5][5];
    int arr2[5][5];
    int arr3[5][5];
    int r, c;
    printf("Enter number of rows & columns for matrix: \n");
    scanf("%d %d", &r, &c);

    printf("Enter values for Matrix - 1: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Element for - Row: %d Col: %d: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter values for Matrix - 2: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Element for - Row: %d Col: %d: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            for (int k = 0; k < c; k++)
            {
                arr3[i][j] = arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("Multiplication of two Matrices: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d    ", arr3[i][j]);
        }
        printf("\n");
    }
}
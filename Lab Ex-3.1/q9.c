#include <stdio.h>

int main()
{
    int arr1[5][5];
    int arr2[5][5];
    int m, n;
    printf("Enter number of rows & columns for matrix: \n");
    scanf("%d %d", &m, &n);

    printf("Enter values for Matrix to find Transpose: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element for - Row: %d Col: %d: ",i,j);
            scanf("%d", &arr1[i][j]);
            arr2[j][i] = arr1[i][j];
        }
    }

    printf("Original Matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d    ",arr1[i][j]);
        }
        printf("\n");
    }

    printf("Transposed Matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d    ",arr2[i][j]);
        }
        printf("\n");
    }
}
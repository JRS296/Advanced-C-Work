/* You will be given a N×M matrix A of integers and K add operations to execute. An add operation
adds a constant to all of the entries in a square sub-matrix of A and it is specified
by 4 integers R,C,S and D where R is the row number, C is the column number, S is the size of the
sub-matrix and D is the constant to add to the entries. The entry at row R and column C is denoted
by A[R][C]. The row and column numbers in a query correspond to the upper-left corner of the
square sub-matrix to update.
Your task it to print the matrix after applying all of the K add operations. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    printf("%d%d%d\n", n, m, k);

    int arr[50][50];
    int arr2[50][50];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            // printf(" - %d\n", arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr2[i][j] = 0;
        }
    }

    while (k--)
    {
        int r, c, s, d;
        scanf("%d %d %d %d", &r, &c, &s, &d);
        for (int i = 0; i < n; i++)
        {
        }
        for (int i = r - 1; i < r + s - 1; i++)
        {
            for (int j = c - 1; j < c + s - 1; j++)
            {
                arr2[i][j] += d;
            }            
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr2[i][j] = arr2[i][j] + arr[i][j];
        }
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int n, n1, temp;
    char ch;
    printf("Enter number of elements of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter position of element to be swapped, and specify if to the right(1) or left(0): \n");
    scanf("%d %c", &n1, &ch);

    if (n1 < 0 || n1 > n)
    {
        printf("Invalid Choice!\n");
    }
    else
    {
        if (ch == 'l')
        {
            if (n1 == 0)
                swap(&arr[n1], &arr[n-1]);
            else
                swap(&arr[n1], &arr[n1 - 1]);
        }
        else if (ch == 'r')
        {
            if (n1 == n)
                swap(&arr[n1-1], &arr[0]);
            else
                swap(&arr[n1], &arr[n1 - 1]);
        }
        else
        {
            printf("Invalid Choice!\n");
        }
        printf("New Array: \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}
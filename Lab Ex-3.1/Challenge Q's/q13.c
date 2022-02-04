// Name: Jonathan Rufus Samuel - 20BCT0332
// Advanced C Programming (ELA) Assignment - 2; Part-1 (Arrays) - Q13 (Challenging Q's)
// Q: WAP to carry out Left to Right rotations of a 1-D array n times

#include <stdio.h>

void rotate(int arr[], int n)
{
    int x = arr[n - 1], i;
    for (i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = x;
}

int main()
{
    int arr[10], i,ro;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Enter array elements: \n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element for - Row: %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Given array is\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter number of rotations: ");
    scanf("%d",&ro);

    for(int i=0; i<ro; i++)
    {
        rotate(arr, n);
    }

    printf("\nRotated array is\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
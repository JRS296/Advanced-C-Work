#include <stdio.h>

int count(int x, int n, int a[])
{
    int c = 0;
    for (int i=0; i<n; i++)
    {
        if(a[i] == x)
        {
            c++;
        }
    }
    return(c);
}

void main()
{
    int arr1[15], arr2[15], arr3[15];
    int i, j = 0, k = 0, flag = 0, n;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element - %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (count(arr1[i], n, arr1) >=2)
        {
            arr2[j] = arr1[i];
            j++;
        }
        else
        {
            arr3[k] = arr1[i];
            k++;
        }
    }

    printf("\nThe Repeating Characters are: \n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\nThe Non-Repeating Characters are: \n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    printf("\n\n");
}
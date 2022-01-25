#include <stdio.h>

void main()
{
    int arr1[15], arr2[15], arr3[15], arr4[15];
    int i, j = 0, k = 0, l = 0, flag = 0, n;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array: ", n);
    for (i = 0; i < n; i++)
    {
        printf("Element - %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr1[i] % 2 == 0)
        {
            arr2[j] = arr1[i];
            j++;
        }
        else
        {
            arr3[k] = arr1[i];
            k++;
        }

        for (int z = 1; z <= arr1[i]; z++)
        {
            if (arr1[i] % z == 0)
            {
                flag++;
            }
        }

        if (flag == 2)
        {
            arr4[l] = arr1[i];
            l++;
        }
        flag = 0;
    }

    printf("\nThe Even elements are : \n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\nThe Odd elements are :\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    printf("\nThe Prime numbers are :\n");
    for (i = 0; i < l; i++)
    {
        printf("%d ", arr4[i]);
    }
    printf("\n\n");
}
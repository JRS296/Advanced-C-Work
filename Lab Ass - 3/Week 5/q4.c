// Write a program to identify the highest number and number of times it occurred.

#include <stdio.h>
#include <stdlib.h>

void inputArray(int *arr, int size)
{
    int *arrEnd = (arr + size - 1);
    while (arr <= arrEnd)
    {
        // scanf("%f", (arr + i));
        scanf("%d", arr++);
    }
}

int highest(int *arr, int s)
{
    int highest = 0;
    for (int i = 0; i < s; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
    }
    return highest;
}

int count(int *arr, int s, int highest)
{
    int count = 0;
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == highest)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int size, toSearch, high, co;

    printf("Enter size of array: ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter elements in array: ");
    inputArray(arr, size);


    high = highest(arr, size);
    co = count(arr, size, high);

    printf("Highest number: %d\n", high);
    printf("Count of Highest No: %d\n", co);

    return 0;
}
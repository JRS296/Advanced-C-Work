//Name: Jonathan Rufus Samuel - 20BCT0332
//Advanced C Programming (ELA) Assignment - 2; Part-1 (Arrays) - Q6

#include <stdio.h>

int main()
{
    int n;
    char num;
    char arr[15];
    printf("Enter number of elements for Array: ");
    scanf("%d", &n);
    int x = n; //For some reason, n loses value by the time it reaches first for loop

    printf("Enter %d elements for Array: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &arr[i]);
    }

    printf("Enter element to be searched from Array: ");
    scanf("%s", &num);
    
    for (int j = 0; j < x; j++)
    {
        if (num == arr[j])
        {
            arr[j] = '*';
            continue;
        }
    }

    printf("Final Array: ");
    for (int i = 0; i < x; i++)
    {
        printf("%c ", arr[i]);
    }
}
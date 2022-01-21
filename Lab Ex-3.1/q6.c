#include<stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int n; 
    char num;
    char arr[15];
    printf("Enter number of elements for Array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements for Array: \n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%c", &arr[i]);
    }


    printf("Enter element to be searched from Array: ");
    scanf("%c", &num);

    for(int i=0; i<n; i++)
    {
        if(num == i)
        {
            printf("Element Found!");
            arr[i] = '*';
        }
        else{
            printf("Element not Found!");
        }
    }

    printf("Final Array: ");
    for(int i=0; i<n; i++)
    {
        printf("%c ",arr[i]);
    }
}
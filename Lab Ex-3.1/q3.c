//Name: Jonathan Rufus Samuel - 20BCT0332
//Advanced C Programming (ELA) Assignment - 2; Part-1 (Arrays) - Q3

#include<stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int n, arr[15];
    printf("Enter number of elements for Array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements for Array: \n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n-1; i++)      
    {
        for (int j = 0; j < n-i-1; j++) 
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        } 
    }

    printf("Final Rearranged Array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
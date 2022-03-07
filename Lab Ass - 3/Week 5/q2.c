// Write a program to declare a dynamic pointer and allocate storage to store a 2D array of 50 x 60 of
// data type float. Also write a code to input data to the dynamic array and output the data from the
// dynamic array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row = 50, col = 60, len = 0;
    float *arr = (float *)malloc(row * col * sizeof(float));
    int i, j;

    printf("Enter the data into the 2D array: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            //*(arr + i * col + j) = i + j
            scanf("%f",(arr + i * col + j));
        }
            
    }
        
    printf("The matrix elements are:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%.2f ", *(arr + i * col + j));
        }
        printf("\n");
    }
    free(arr);
    return 0;
}
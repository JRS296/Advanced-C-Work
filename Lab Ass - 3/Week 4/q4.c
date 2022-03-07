//Q4 - Write a program and the following functions to compute the average value for the following data values stored in a two dimensional array.
//a. A function to input the data into a two dimensional array.
//b. A function to compute the row averages and store them in a one dimensional array.
//c. A function to compute the column averages and store them in a one dimensional array.
//d. A function to compute the average of all the values in the array.
//e. A function to output the array, row averages, column averages, and the overall average.

#include <stdio.h>
#include <stdlib.h>
 
// Here, the parameter is an array of pointers
void assign(int** arr, int m, int n)
{
    printf("Enter elements of array: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            scanf("%d", arr[i][j]);
        }
    }
}
 
// Program to pass the 2D array to a function in C
int main()
{
    int m, n;
    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &m, &n);

 
    // dynamically create an array of pointers of size `m`
    int **arr = (int **)malloc(m * sizeof(int *));
    // dynamically allocate memory of size `n` for each row
    for (int r = 0; r < m; r++) {
        arr[r] = (int *)malloc(n * sizeof(int));
    }
 
    assign(arr, m, n);
 
    // print 2D array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
 
    // deallocate memory
    for (int i = 0; i < m; i++) {
        free(arr[i]);
    }
    free(arr);
 
    return 0;
}
//1. Write a program to declare a dynamic pointer and allocate storage to store a 1D array of 5000
//elements of data type float.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int str;
    printf("Enter number of element's worth of storage required: ");
    scanf("%d", &str);
    int *x = (int*)malloc(str * sizeof(float));
    printf("Memory Successfully Allocated!!!");
    free(x);
}
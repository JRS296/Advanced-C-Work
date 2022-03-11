//Q3 - Write a program and the following functions to compute the average rainfall for the year. Use an
//array to store pointers to the first day of each month and another array to store the number of days in each month.
//a. A function to input the average rainfall data of each day of the year into a one dimensional array.
//b. A function to compute the average rainfall for the year or any month.
//c. A function to output the average rainfall for each month and the yearly average rainfall. 

#include <stdio.h>

void input_avg()
{
    int arr[365];
    printf("Enter average rainfall data for each day: ");
    for(int i=0; i<365; i++)
    {
        scanf("%d", &arr[i]);
    }
    avg_rain(arr);
}

void avg_rain(int arr[365])
{
    int choice = 0;
    int choice2 = 0, sum=0;
    printf("Type 1 for Avg Rainfall per month (or) 2 for Avg Rainfall per year: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter number of month for avg rainfall: ");
        scanf("%d", &choice2);
        int months = {31,28,31,30,31,30,31,31,30,31,30,31};
        int num1 = 0, num2 = 0;

        for(int i=0; i<choice2-1; i++)
        {
            num1 += months[i];
        }
        num2 = num1 + months[choice2-1];

        for (int i=num1-1; i<num2-1; i++)
        {
            sum += arr[i];
        }
        int avg = sum/months[choice2-1];
        printf("Average Rainfall for month %d : %d\n",choice2-1, avg);
    }
    else if (choice == 2)
    {
        for(int i=0; i<365; i++)
        {
            sum += arr[i];
        }
        int avg = sum/365;
        printf("Average Rainfall: %d\n", avg);
    }
    else{
        printf("Invalide Input. \n");
    }
}

int output()
{
    
}

int main()
{
    input_avg();
    return 0;
}
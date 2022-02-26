/*
a. Create a structure to specify data of customers in a bank. The data to be stored is: Account
number, Name, Balance in account. Assume maximum of 100 customers in the bank.
i) Write a function to print the Account number and name of each customer with balance
below Rs. 100.
ii) If a customer requests for withdrawal or deposit, the form contains the fields:
Acct. no, amount, code (1 for deposit, 0 for withdrawal)
Write a program to give a message, “The balance is insufficient for the specified
withdrawal”, if on withdrawal the balance falls below Rs. 500.
*/

#include <stdio.h>
#include <conio.h>
#include <Windows.h>

struct acc_holder
{
    long int acc_num;
    char name[30];
    int bal;
} sbi[200] = {234, "Messi", 10000,
              235, "Pele", 12345678,
              236, "Ronaldo", 45,
              237, "Maradona", 12,
              238, "Beckenbauer", 200000};

void action(int accnum, int amount, int code)
{
    int i;
    for (i = 0; i < 200; i++)
        if (sbi[i].acc_num == accnum)
            break;
    if (!code)
    {
        if (sbi[i].bal - amount < 100)
        {
            printf("\nThe balance is insufficient for the specified withdrawal");
            return;
        }
        else
        {
            sbi[i].bal -= amount;
            printf("\nYour new account balance is : %d", sbi[i].bal);
        }
    }
    else
    {
        sbi[i].bal += amount;
        printf("\nYour new account balance is : %d", sbi[i].bal);
    }
}

void belowhundred() //Function for Account Number of balance below 100
{
    int i;
    for (i = 0; i < 200; i++)
    {
        if (sbi[i].bal < 100 && sbi[i].bal > 0)
        {
            printf("\nName : %s", sbi[i].name);
            printf("\nAccount Number : %d\n\n", sbi[i].acc_num);
        }
    }
}

int main()
{
    int accnum, amount, code;
    printf("\nEnter your account number : ");
    scanf("%d", &accnum);
    printf("Enter 1 for deposit and 0 for withdrawal : ");
    scanf("%d", &code);
    if (code)
    {
        printf("\nEnter amount to be deposit : ");
        scanf("%d", &amount);
    }
    else
    {
        printf("\nEnter amount to withdraw : ");
        scanf("%d", &amount);
    }
    action(accnum, amount, code);
    _getch();
    system("cls");
    printf("All members with account balance less than 100 are following : ");
    below100();
    _getch();
    return 0;
}

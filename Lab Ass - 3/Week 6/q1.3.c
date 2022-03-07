// Write a menu driven program in C to create a structure employee having fields empid, empname,
// salary. Accept the details of 'n' Employees from the user and perform the following operations using
// function. - Search by Emp-Id - Display All - Display Names of Employee having Salary > 10000

#include <stdio.h>
#include <stdlib.h>
struct details
{
    char name[30];
    int eid;
    int salary;
} emp[5];
void emp_search(int r)
{
    int id, i;
    printf("\nEnter Employee-Id to be Searched : ");
    scanf("%d", &id);
    printf("----------------------------------------\n");
    for (i = 0; i < r; i++)
    {
        if (emp[i].eid == id)
        {
            printf("Employee Id : %d", emp[i].eid);
            printf("\nName        : %s", emp[i].name);
            printf("\nSalary      : %d\n", emp[i].salary);
        }
    }
}
void display(int r)
{
    int i;
    printf("\nList of All Employees:\n");
    printf("-------------------------------\n");
    printf("Emp-Id\tEmp-Name  Salary\n");
    printf("--------------------------------\n");
    for (i = 0; i < r; i++)
    {
        printf("%d\t%s\t  %d\n", emp[i].eid, emp[i].name, emp[i].salary);
    }
}
void greater(int r)
{
    int i;
    printf("\nDetails of Employee Whose Salary > 10000\n");
    printf("------------------------------------------------");
    for (i = 0; i < r; i++)
    {
        if (emp[i].salary > 10000)
        {
            printf("\n Employee Name : %s", emp[i].name);
            printf("\n Employee-Id   : %d", emp[i].eid);
            printf("\n Salary        : %d\n", emp[i].salary);
        }
    }
}
int main()
{
    int n, i, ch;
    printf("/*How Many Employee Record You Want to Add*/\n\nEnter Limit  : ");
    scanf("\n %d", &n);
    for (i = 0; i < n; i++)
    {
        printf("-----------------------------------------");
        printf("\n\tEnter Details of Employee-%d", i + 1);
        printf("\n-----------------------------------------");
        printf("\nName of Employee : ");
        scanf("%s", emp[i].name);
        printf("Employee-Id      : ");
        scanf("%d", &emp[i].eid);
        printf("Salary : ");
        scanf("%d", &emp[i].salary);
    }
    while (1)
    {
        printf("-----------------------------------------\n");
        printf("\t\tMenu\n");
        printf("-----------------------------------------");
        printf("\n 1:Search Employee by E-ID");
        printf("\n 2:List of All Employee");
        printf("\n 3:Display Employee Name whose Salary > 10000 ");
        printf("\n 4:Exit");
        printf("\n----------------------------------------\n");
        printf("Enter Your Choice : ");
        scanf("\n %d", &ch);
        switch (ch)
        {
        case 1:
            emp_search(n);
            break;
        case 2:
            display(n);
            break;
        case 3:
            greater(n);
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}
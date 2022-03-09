// Write a 'C' Program to create a structure of student having fields roll_no, stud_name, mark1, mark2,
// mark3. Calculate total marks and average marks. Arrange the records in descending order of marks.

//Using: Pointer to Structure

#include <stdio.h>
struct student
{
    int rno;
    char name[20];
    int marks[3];
    int total;
    float avg;
}stud[2];
int main()
{
    int i, j;
    struct student s;
    struct student *ptr = NULL;
    ptr = stud;
    for (i = 0; i < 2; i++)
    {
        printf("Enter Record for Student-%d \n", i + 1);
        printf("-----------------------------------\n");
        printf("Enter Roll-No. : ");
        scanf("%d", &ptr->rno);
        printf("Enter Name     : ");
        scanf("%s", ptr->name);
        ptr->total = 0;
        for (j = 0; j < 3; j++)
        {
            printf("Enter Marks of Subject %d : ", j + 1);
            scanf("%d", &ptr->marks[j]);
            ptr->total = ptr->total + ptr->marks[j];
            ptr->avg = ptr->total / 3.0;
        }
        printf("\n-----------------------------------\n");
        ptr++;
    }

    ptr = stud;
    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 2; j++)
        {
            if (ptr->total < ptr->total)
            {
                s = stud[i];
                stud[i] = stud[j];
                stud[j] = s;
            }
        }
    }
    printf("Records in Descending Order.\n (According to Total-Marks)");
    printf("\n-----------------------------------\n");
    printf("\n ROLLNO   NAME  TOTAL-MARKS  AVG\n");
    ptr = stud;
    for (i = 0; i < 2; i++)
    {
        printf("\n %d\t %s\t %d\t %.2f", ptr->rno, ptr->name, ptr->total, ptr->avg);
        ptr++;
    }
    return 0;
}
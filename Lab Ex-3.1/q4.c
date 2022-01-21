#include <stdio.h>
int num = 10;
int main()
{
    int choice = 0, value, arr[]={1,2,3,4,5,6,7,8,9,10};
    while (choice != 4)
    {
        printf("Enter 1 to enter element in BEGINING of Array\n");
        printf("Enter 2 to enter element in MIDDLE of Array\n");
        printf("Enter 3 to enter element in END of Array\n");
        printf("Enter 4 to exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element value: \n");
            scanf("%d", &value);
            arr[0] = value;
            for (int i=0; i<num; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
            break;

        case 2:
            printf("Enter element value: \n");
            scanf("%d", &value);
            arr[(num+0)/2] = value;
            for (int i=0; i<num; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
            break;

        case 3:
            printf("Enter element value: \n");
            scanf("%d", &value);
            arr[num-1] = value;
            for (int i=0; i<num; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
            break;

        case 4:
            choice = 4;
            break;

        default:
            printf("Wrong choice! Try again...\n");
            continue;
        }
    }
}
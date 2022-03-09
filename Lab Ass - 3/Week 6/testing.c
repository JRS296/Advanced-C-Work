// Write C program to accept batting information of cricket team using structure. It contains player
// name and runs scored by a player. Calculate total runs scored by the cricket team.

//Using: pointer to structure

#include <stdio.h>
struct player
{
    char name[20];
    int runs;
};

int main()
{
    int i, s = 0;
    struct player a[11]; 
    struct player *ptr = NULL;
    ptr = a;
    printf("Enter Name of Player Runs Scored \n");
    printf("---------------------------------------------\n");
    for (i = 0; i <= 10; i++)
    {
        scanf("%s", ptr->name);
        scanf("%d", &ptr->runs);
        printf("\n");
        ptr++;
    }
    ptr = a;

    for (i = 0; i <= 10; i++)
    {
        s += (ptr->runs);
        ptr++;
    }  
    printf("\n---------------------------------------------\n");
    printf("Total Runs Scored by Team: %d", s);
    return 0;
}
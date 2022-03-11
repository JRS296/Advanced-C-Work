// Write C program to accept batting information of cricket team using structure. It contains player
// name and runs scored by a player. Calculate total runs scored by the cricket team.

//Using: pass the address of the structure variable to user defined function and display the contents. 

#include <stdio.h>
struct player
{
    char name[20];
    int runs;
};

int user_def_func(struct player a2[11])
{
    int s = 0;
    printf("Enter Name of Player Runs Scored \n");
    printf("---------------------------------------------\n\t");
    for (int i = 0; i <= 10; i++)
    {
        scanf("%s", a2[i].name);
        scanf("%d", &a2[i].runs);
        printf("\t");
    }
    for (int i = 0; i <= 10; i++)
        s = s + a2[i].runs;

    return s;
}

int main()
{
    int i, s = 0;
    struct player a[11]; // a[11] - no. of players
    s = user_def_func(a);
    printf("\n---------------------------------------------\n");
    printf("Total Runs Scored by Team: %d", s);
    return 0;
}
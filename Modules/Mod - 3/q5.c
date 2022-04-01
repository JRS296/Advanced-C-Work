//REturning Structure Variable

#include <stdio.h>
// creating a student structure template
struct student
{
    char firstname[64];
    char lastname[64];
    char id[64];
    int score;
};

// function declaration
struct student getDetail(void);
void displayDetail(struct student std);
int main(void)
{

    // creating a student structure array variable
    struct student stdArr[3];
    // other variables
    int i;

    // taking user input
    for (i = 0; i < 3; i++)
    {
        printf("Enter detail of student #%d\n", (i + 1));
        stdArr[i] = getDetail();
    }

    // output
    for (i = 0; i < 3; i++)
    {
        printf("\nStudent #%d Detail:\n", (i + 1));
        displayDetail(stdArr[i]);
    }

    return 0;
}
struct student getDetail(void)
{
    // temp structure variable
    struct student std;

    printf("Enter First Name: ");
    scanf("%s", std.firstname);

    printf("Enter Last Name: ");
    scanf("%s", std.lastname);

    printf("Enter ID: ");
    scanf("%s", std.id);

    printf("Enter Score: ");
    scanf("%d", &std.score);

    return std;
}
void displayDetail(struct student std)
{
    printf("Firstname: %s\n", std.firstname);
    printf("Lastname: %s\n", std.lastname);
    printf("ID: %s\n", std.id);
    printf("Score: %d\n", std.score);
}
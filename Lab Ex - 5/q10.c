//Jonathan Rufus Samuel (20BCT0332)
/*DA-5: q10 - Create a user-defined datatype from a structure. The structure should
contain the variables such as name, regno, cgpa, and age of students. use
array of structurestr.*/

#include <stdio.h>
struct student {
    char firstName[50];
    int regno;
    float cgpa;
    int age;
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].regno = i + 1;
        printf("\nFor roll number: %d,\n", s[i].regno);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
        printf("Enter age: ");
        scanf("%f", &s[i].age);
    }
    printf("\n\nDisplaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("CGPA: %.1f", s[i].cgpa);
        printf("AGE: %.1f", s[i].age);
        printf("\n");
    }
    return 0;
}

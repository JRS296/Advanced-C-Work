#include<stdio.h>
#include<math.h>

int main()
{
    float box;
    printf("Enter Boxer weight: \n");
    scanf("%f", &box);
    if (box<115){
        printf("Weight Class: Fly weight");
    }
    else if (box>=115&&box<=121){
        printf("Weight Class: Bantam weight");
    }
    else if (box>=122&&box<=153){
        printf("Weight Class: Feather weight");
    }
    else if (box>=154&&box<=189){
        printf("Weight Class: Middle weight");
    }
    else if (box>=190){
        printf("Weight Class: Heavy weight"); 
    }
}
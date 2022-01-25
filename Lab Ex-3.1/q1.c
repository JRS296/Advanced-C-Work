#include <stdio.h>
#include<stdlib.h>

void swap(char *xp, char *yp)
{
    char temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int num = 0;
    //char ch[25];
    printf("Enter number of aplphabets for array: \n");
    scanf("%d", &num);
    char* ch = (char*)malloc((num+1) * sizeof(char));
    ch[num+1] = '\0';
    for (int i=0; i<num; i++)
    {
        printf("Enter aplphabets for array: \n");
        scanf("%s", &ch[i]); //If you need to take an character array as input 
                            //you should use scanf("%s",name), printf("%s",name); 
                            //rather than using the %c . The %c returns the pointer 
                            //to a character which cannn't be stored in pointer to character array.
    }

    printf("\nAscending Order: \n");
    for (int i = 0; i < num-1; i++)      
    {
        for (int j = 0; j < num-i-1; j++) 
        {
            if (ch[j] > ch[j+1])
            {
                swap(&ch[j], &ch[j+1]);
            }
        } 
    }
    for (int i=0; i<num; i++)
    {
        printf("%c ",ch[i]);
    }

    printf("\nDescending Order: \n");
    for (int i = 0; i < num-1; i++)      
    {
        for (int j = 0; j < num-i-1; j++) 
        {
            if (ch[j] < ch[j+1])
            {
                swap(&ch[j], &ch[j+1]); 
            }
        } 
    }
    for (int i=0; i<num; i++)
    {
        printf("%c ",ch[i]);
    }
}
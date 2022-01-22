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
    
    printf("Enter number of aplphabets for array: \n");
    scanf("%d", &num);
    char* ch = (char*)malloc(num * sizeof(char));

    for (int i=0; i<num; i++)
    {
        printf("Enter aplphabets for array: \n");
        scanf("%c", &ch[i]);
    }

    printf("Ascending Order: \n");
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
    
    printf("Descending Order: \n");
    for (int i = num-1; i > 0; i--)      
    {
        for (int j = num-i-j; j > 0; j--) 
        {
            if (ch[j] > ch[j-1])
            {
                swap(&ch[j], &ch[j+1]); //Swap in descending 
            }
        } 
    }
}
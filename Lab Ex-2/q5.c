#include<stdio.h>

int main()
{
    int arr[10],p=0,n=0,z=0;
    printf("Enter 10 numbers: \n");
    for (int i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            p++;
        }
        else if(arr[i]<0)
        {
            n++;
        }
        else
        {
            z++;
        }
    }
    
    printf("Number of positive Numbers: %d\n",p);
    printf("Number of negative Numbers: %d\n",n);
    printf("Number of zero Numbers: %d\n",z);
}
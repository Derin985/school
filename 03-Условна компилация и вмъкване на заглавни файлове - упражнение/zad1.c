#include <stdio.h>

#define DEBUG
#define SIZE 10

void function(int a[]);

void main()
{
    int a[SIZE] = {1,10,-12,6,12,15,-16,8,133,20};
    function(a);
}

void function(int a[])
{
    for (int i = 0; i < SIZE - 1; i++) 
    {
        for (int j = 0; j < SIZE - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1] = temp;
            }
        }
    }

    #ifdef DEBUG
    for(int i = 0 ; i < SIZE ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    #endif
    int sum = 0;
    for(int i = 0 ; i < SIZE ; i++)
    {
        if(i%3==0 && i != 0)
        {
            #ifdef DEBUG
            printf("%d ",a[i]);
            #endif
            sum+=a[i];
        }
    }
    printf("\n%d ",sum);
}
#include <stdio.h>

#define ARRAY_SIZE 101

void main()
{
    #if defined ARRAY_SIZE & ARRAY_SIZE < 11 & ARRAY_SIZE > -1
    int a[ARRAY_SIZE];
    for(int i = 0 ; i<ARRAY_SIZE ; i++)
    {
        int temp = 1;
        for(int j = 0 ; j<i ; j++) temp*=2;
        a[i] = temp;
    }
    for(int i = 0 ; i<ARRAY_SIZE ; i++)
    {
        printf("\n%d",a[i]);
    }
    #else
    printf("NE E VALIDNA STOINOST");
    #endif
}
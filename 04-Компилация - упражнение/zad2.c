#include <stdio.h>

void main()
{
    int a=18,b=12,r;

    for(int i = a ; i<=a*b ; i+=a)
    {
        if(i%b==0) 
        {
            r=i;
            break;
        }
    }
    printf("%d",r);
}
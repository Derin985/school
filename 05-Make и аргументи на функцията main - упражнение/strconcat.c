#include "mystrings.h"
#include <stdio.h>

void main(int argc , char **argv)
{
    char a[50] = "";
    char b[50] = "";
    for(int i = 0 ; i<strlength(argv[1]) ; i++) a[i] = argv[1][i];
    for(int i = 0 ; i<strlength(argv[2]) ; i++) b[i] = argv[2][i];

    if(argv[3]!='\0') 
    {
        printf("This program only takes 2 arguments");
    }
    else if(strlength(argv[1])>50 || strlength(argv[2])>50)
    {
        printf("the max size of the strings is 50 symbols");
        return;
    }
    else
    {
    strconcat(a,b);
    printf("\n%s",a);
    }
}
#include "mystrings.h"
#include <stdio.h>

int strlength(char a[])
{
    int i = 0;
    while(a[i]!='\0') i++;
    return i;
}

void strconcat(char a[] , char b[])
{
    int len = strlength(a);
    for(int i = len; i<len+strlength(b) ; i++) a[i] = b[i-len];
}

int strcompare(char a[] , char b[])
{
    for(int i = 0 ; i < strlength(a) + strlength(b) ; i++)
    {
        if(a[i]>b[i]) return 1;
        if(a[i]<b[i]) return -1;
    }
    return 0;
}



#include <stdio.h>
#include <string.h>
#include "transformation.h"

struct transformation tranform(char a[])
{
    struct transformation res;

    res.result = 0;
    strcpy(res.error , "\0");

    int o = 0;
    if (a[0]=='-') o = 1;

    for(int i = o ; a[i]!='\0' ; i++)
    {
        if(a[i]>'9'||a[i]<'0')
        {
            strcpy(res.error , "not a number");
            res.result = 0;
            break;
        }
        res.result = res.result*10 + a[i] - '0';

    }

    if(o==1) res.result*=-1;
    return res;
}

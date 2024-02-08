#include "safeint.h"
#include <stdio.h>

void main(int argc , char **argv)
{
    struct SafeResult a = safestrtoint(argv[1]);
    struct SafeResult b = safestrtoint(argv[2]);
    if(a.errorflag == '1' || b.errorflag == '1' || a.value > INT_MAX || a.value < INT_MIN || b.value > INT_MAX || b.value < INT_MIN)
    {
        printf("arguments are not valid integers ");
    }
    else
    {
        struct SafeResult r = safeadd(a.value,b.value);
        if(r.errorflag == '1') printf("Operation is invalid");
        else printf("%d",r.value);
    }
}
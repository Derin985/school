#include <stdio.h>
#include "math.h"

int fact(int a)
{
    if(a>2) return a*fact(a-1);
    else return 2;
}
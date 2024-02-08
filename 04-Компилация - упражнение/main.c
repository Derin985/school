#include <stdio.h>
#include "transformation.h"

void main()
{
    char a[100] = "1234567";
    char b[100] = "-891222";
    char c[100] = "12aasda3456b7";

    printf("\n result = %d       error = %s", tranform(a).result, tranform(a).error);
    printf("\n result = %d       error = %s", tranform(b).result, tranform(b).error);
    printf("\n result = %d       error = %s", tranform(c).result, tranform(c).error);
}
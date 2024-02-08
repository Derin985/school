#include "mystrings.h"
#include <stdio.h>

void main(int argc , char **argv)
{
    if(argv[2]!='\0') printf("This program only takes 1 argument");
    else printf("%d",strlength(argv[1]));
}
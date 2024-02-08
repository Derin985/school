#include "mystrings.h"
#include <stdio.h>

void main(int argc , char **argv)
{
    if(argv[3]!='\0') printf("This program only takes 2 arguments");
    else printf("%d",strcompare(argv[1],argv[2]));
}
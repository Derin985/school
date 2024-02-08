#ifndef SAFEINT
#define SAFEINT

#include <limits.h>

struct SafeResult
{
    int value;
    char errorflag;
};

struct SafeResult safeadd(int , int);
struct SafeResult safesubtract(int , int);
struct SafeResult safemultiply(int , int);
struct SafeResult safedivide(int , int);
struct SafeResult safestrtoint(char []);



#endif
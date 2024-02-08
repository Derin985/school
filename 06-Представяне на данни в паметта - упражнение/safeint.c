#include <stdio.h>
#include <limits.h>
#include "safeint.h"

struct SafeResult safeadd(int c, int d)
{
    struct SafeResult result;
    result.value = 0;
    result.errorflag = '0';
    long long a = c;
    long long b = d;
    if( a+b <= INT_MAX && a+b >= INT_MIN){
        result.value = a+b;
    }
    else
    {
        result.errorflag = '1';
    }
    return result; 
}

struct SafeResult safesubtract(int c, int d)
{
    struct SafeResult result;
    result.value = 0;
    result.errorflag = '0';
    long long a = c;
    long long b = d;
    if( a-b <= INT_MAX && a-b >= INT_MIN){
        result.value = a-b;
    }
    else
    {
        result.errorflag = '1';
    }
    return result; 
}


struct SafeResult safemultiply(int c, int d)
{
    struct SafeResult result;
    result.value = 0;
    result.errorflag = '0';
    long long a = c;
    long long b = d;
    if( a*b <= INT_MAX && a*b >= INT_MIN){
        result.value = a*b;
    }
    else
    {
        result.errorflag = '1';
    }
    return result; 
}

struct SafeResult safedivide(int c , int d)
{
    struct SafeResult result;
    result.value = 0;
    result.errorflag = '0';
    long long a = c;
    long long b = d;
    if( b!=0 && a/b <= INT_MAX && a/b >= INT_MIN){
        result.value = a/b;
    }
    else
    {
        result.errorflag = '1';
    }
    return result; 
}


struct SafeResult safestrtoint(char a[])
{
    struct SafeResult result;
    result.value = 0;
    result.errorflag = '0';
    long long b = 0;
    int o = 0;
    if (a[0] == '-') o = 1;

    for(int i = o ; a[i]!='\0' ;i++){

        if(b>INT_MAX || a[i]>'9' || a[i] < '0')
        {
            result.errorflag = '1';
            return result;
        }


        b = b*10 + a[i] - '0';
    }

    if(o==1)b*=-1;
    result.value = b;
    return result;
}




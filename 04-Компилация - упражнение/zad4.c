#include <stdio.h>
#include <math.h>

void main()
{
    int n = 6;
    long a[10] = {12,16,4,3,6,7};
    for(int i = 0 ; i<n ; i++ ) a[i] = pow(a[i],4);
    for(int i = 0 ; i<n ; i++ ) printf(" %d",a[i]);
}
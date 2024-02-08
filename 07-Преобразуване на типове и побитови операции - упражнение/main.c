#include <stdio.h>
#include "quadraticroots.h"

void main(){
    int a = 6,b=11,c=-35;
    struct QuadraticRootsResult result = findroots(a,b,c);
    printf("\nx1 = %f x2 = %f norealroots = %d",result.x1,result.x2,result.norealroots);

    float a1 = 6.1,b1=9.4,c1=1.5;
    result = findroots(a1,b1,c1);
    printf("\nx1 = %f x2 = %f norealroots = %d",result.x1,result.x2,result.norealroots);

    double a2 = 9.12999,b2=1.2333333,c2=-2.2111111;
    result = findroots(a2,b2,c2);
    printf("\nx1 = %f x2 = %f norealroots = %d",result.x1,result.x2,result.norealroots);
}
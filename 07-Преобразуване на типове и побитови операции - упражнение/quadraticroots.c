#include <stdio.h>
#include <math.h>
#include "quadraticroots.h"


struct QuadraticRootsResult findroots(double a, double b, double c){
    struct QuadraticRootsResult result;
    result.x1 = 0;
    result.x2 = 0;
    result.norealroots = 0;

    
    long double d = (b*b)-(4*a*c);
    if(d<0){
        result.norealroots = 1;
        return result;
    }
    else{
        result.x1 = (-1*b+sqrtl(d))/(2*a);
        result.x2 = (-1*b-sqrtl(d))/(2*a);
        return result;
    }


}
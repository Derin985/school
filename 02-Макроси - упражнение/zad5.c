#include <stdio.h>

#define SWAP(A,B,TYPE) { TYPE C ; C = A ; A = B ; B = C ; } 

void main() {
    int a = 0 , b = 7;
    SWAP(a,b,int);
    printf("%d , %d",a,b);
    
}
#include <stdio.h>

#define SIZE 5

#define SWAP(A,B,TYPE) { TYPE C ; C = A ; A = B ; B = C ; } 

#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
for(int i ; i < SIZE - 1 ; i++)\
{\
    for(int j = 0 ; j < SIZE - i - 1 ; j++)\
    {\
        if(ARRAY[j] COMPARE ARRAY[j+1]) SWAP(ARRAY[j],ARRAY[j+1],TYPE);\
    }\
}

void main() {
    int a[SIZE] = {12,76,-4,0,124};
    SORT(a,SIZE,int,<);
    for(int i = 0; i < SIZE; i++) printf("%d ",a[i]);
}
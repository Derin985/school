#include <stdio.h>

#define COMP(a,b) (a > b) ? (c = a) : (c = b)
 

void main() {
  int a = 7 , b = 9,c;
  COMP(a,b);
  printf("%d",c);
}
#include <stdio.h>

#define DEBUG(a) printf("%s %d %s %d",#a,a,__FILE__,__LINE__)
 

void main() {
  int a = 7;
  DEBUG(a);
}
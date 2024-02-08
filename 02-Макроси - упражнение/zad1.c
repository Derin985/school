#include <stdio.h>

#define SIZE 5
#define PRINT_ARRAY for(int i = 0; i < SIZE; i++) printf("%d",array[i]);
 

void main() {
  int array[SIZE] = {7,16,46,12,15};
  PRINT_ARRAY
}
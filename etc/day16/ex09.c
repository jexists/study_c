#include <stdio.h>
#include <stdlib.h>

int *addressMemory(){
  int *intPointer = malloc(sizeof(int));
  *intPointer = 123;
   return intPointer;
}

int main(){
  int *resultPointer;
  resultPointer = addressMemory();

  printf("resultPointer  : %p\n", resultPointer);
  printf("*resultPointer : %d\n", *resultPointer);

  free(resultPointer);

  return 0;
}

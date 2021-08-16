#include <stdio.h>
#include <stdlib.h> // malloc(), free()

void allocMemory(void **pointer, int size){
   *pointer = malloc(size);
}

int main(){
  long long *numberPointer;

  allocMemory((void **)&numberPointer, sizeof(long long));

  *numberPointer = 10;
  printf("*numberPointer : %lld\n", *numberPointer);

  free(numberPointer);




  return 0;
}

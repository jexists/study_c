#include <stdio.h>

int main(){

  // null pointer : 널 포인터 (NULL 값이 들어있는 pointer)
  int *numberPointer = NULL;

  printf("numberPointer : %p\n", numberPointer);

  int *ptr = NULL;

  if(ptr == NULL){
    ptr = malloc(1024);
  }


  return 0;
}

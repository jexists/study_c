#include <stdio.h>

int main(){

  // null pointer : �� ������ (NULL ���� ����ִ� pointer)
  int *numberPointer = NULL;

  printf("numberPointer : %p\n", numberPointer);

  int *ptr = NULL;

  if(ptr == NULL){
    ptr = malloc(1024);
  }


  return 0;
}

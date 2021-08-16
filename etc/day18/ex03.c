#include <stdio.h>

int getNumber(int *n1, int *n2){
  *n1 = 10;
  *n2 = 20;
    int n3 = *n1 +*n2;

    return n3;
}

int main(){
  int num1 = 0;
  int num2 = 0;
  int result = 0;
  result = getNumber(&num1, &num2);

  printf("%d %d %d\n", num1, num2, result);

  return 0;
}

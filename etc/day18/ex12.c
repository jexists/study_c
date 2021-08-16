#include <stdio.h>

struct Calc{
  int(*pointer)(int, int);
};

int add(int n1, int n2){
  return n1 + n2;
}

int main(){
  struct Calc c;
  c.pointer = add;

  printf("result : %d\n", c.pointer(11, 22));
  return 0;
}

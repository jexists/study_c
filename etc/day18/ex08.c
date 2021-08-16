#include <stdio.h>

void greeting1(){
  printf("Hello, World !!!\n");
}
void greeting2(){
  printf("Hello, Programming !!\n");
}
int add(int n1, int n2){
  return n1 + n2;
}
int main(){
  int(*pointerAdd)(int n1, int n2);

  pointerAdd = add;

  printf("add' address (&add) : %p\n", &add);
  printf("add' address  (add) : %p\n", add);
  printf("pointerAdd : %p\n", pointerAdd);
  printf("pointerAdd' address  : %p\n", &pointerAdd);


  int result = add(11, 22);
  printf("result : %d\n", result);

  result = pointerAdd(11, 22);
  printf("result : %d\n", result);

  printf("-----------------------------------\n");

  void(*greetingPointer)();

    greetingPointer = greeting1;
    greeting1();
    greetingPointer();

    greetingPointer = greeting2;
    greeting2();
    greetingPointer();




  return 0;
}


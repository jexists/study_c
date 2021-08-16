#include <stdio.h>

int add(int n1, int n2){
    return n1 +n2;
}

int multiply(int n1, int n2){
    return n1 * n2;
}

void greeting(){
  printf("Hello, ");
}
void numberToString(int n, char *s1){
  sprintf(s1, "%d", n);
}
int main(){
  void(*pointer3)();
  void(*pointer2)(int, char *);

  char s[20];

  pointer3 = greeting;
  pointer2 = numberToString;

  pointer3();
  pointer2(100, s);
  printf("\ns : %s\n", s);
  printf("--------------------\n");

  int(*pointer1)(int, int);

  pointer1 = add;
  printf("add : %d\n", pointer1(2, 3));

  pointer1 = multiply;
  printf("multiply : %d\n", pointer1(2, 3));

  return 0;
}

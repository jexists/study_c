#include <stdio.h>

int add(int n1, int n2){
  return n1 + n2;
}
// �Լ� �����͸� ��ȯ ������ ����
int (*getAdd())(int, int){
  return add;
}

int main(){
  printf("%d\n", getAdd()(11, 22));
  return 0;
 }

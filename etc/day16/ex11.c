#include <stdio.h>
#include <string.h>

struct Person{
  char name[20];
  int age;
  char addr[100];
};

// ����ü Person�� ��ȯ�ϴ� �Լ�
struct Person  getPerson(){
  struct Person p;
  strcpy(p.name, "������");
  p.age = 20;
  strcpy(p.addr, "����� ������");
  return p;
};


int main(){
  struct Person p1;
  p1 = getPerson();

  printf("�̸� : %s\n", p1.name);
  printf("���� : %d\n", p1.age);
  printf("�ּ� : %s\n", p1.addr);


  return 0;
}

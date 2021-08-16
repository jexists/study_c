#include <stdio.h>
#include <string.h>

struct Person{
  char name[30];
  int age;
  char addr[100];
};
void displayPersonInfo(struct Person p){
  printf("�̸� : %s\n", p.name);
  printf("���� : %d\n", p.age);
  printf("�ּ� : %s\n", p.addr);
}
void displayPersonInfo2(struct Person *p){
  printf("�̸� : %s\n", p -> name);
  printf("���� : %d\n", p -> age);
  printf("�ּ� : %s\n", p -> addr);
}
void setPerson(struct Person *p1){
  strcpy(p1 -> name, "������ �п�");
  p1 -> age = 10;
  strcpy(p1 -> addr, "����� ����");
}
int main(){
  struct Person p1;
  struct Person p2;

  strcpy(p1.name, "������");
  p1.age = 20;
  strcpy(p1.addr, "����� ����");

  displayPersonInfo(p1);

  printf("---------------------------\n");

  displayPersonInfo((struct Person){"�п�", 30, "��õ"});
  printf("---------------------------\n");

  displayPersonInfo((struct Person){.name="�̼���", .age=48, .addr="����"});
  printf("---------------------------\n");

  setPerson(&p2);
  displayPersonInfo2(&p2);
  printf("---------------------------\n");

  return 0;
}



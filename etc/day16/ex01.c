#include <stdio.h>
#include <string.h>  // strcpy()
#include <stdlib.h>  // malloc(), free()

/*
 ����ü�� �����ͷ� ������ �� ����
 malloc �Լ��� ���� �޸𸮸� �Ҵ���

*/
struct Person{
  char name[20];
  int age;
  char addr[100];
};


int main(){
  struct Person *pt1 = malloc(sizeof(struct Person));

  // ȭ��ǥ �����ڷ� ����ü ����� �����ؼ� ���� �Ҵ���
  strcpy(pt1 -> name, "�̼���");
  pt1 -> age = 48;
  strcpy(pt1 -> addr, "����� ���빮��");

  printf("�̸� : %s\n", pt1 -> name);
  printf("���� : %d\n", pt1 -> age);
  printf("�ּ� : %s\n", pt1 -> addr);

  free(pt1);

  return 0;
}




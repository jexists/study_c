#include <stdio.h>

int main(){

  int num = 10;

  printf("num ������ ����(�Ҵ�)�� �� ����ϱ�\n");
  printf("num : %d\n", num);

  printf("num ������ �ּ� ����ϱ�\n");
  printf("num : %p\n\n\n", &num);

  printf("C���� �޸� �ּҴ� ������(pointer) ������ ������\n");
  printf("������ ������ *�� ����ؼ� ������\n ");
  printf("������ ������ ���Ӹ��� �����Ͷ�� ��\n");
  printf("\n�ڷ���(data type) *������(����) �̸�;\n");
  printf("������(����) = &(�Ϲ�)����\n\n");


  int *numberPointer;  // ������ ���� ����
  int number = 11;      // (�Ϲ�) ���� ����

  // number ��� �̸�ǥ(����)�� ���� �޸� ������ �ּҸ� �Ҵ���
  numberPointer = &number;

  printf("number : %d\n", number);
  printf("number(�ּ�) : %p\n", numberPointer);
  printf("number(�ּ�) : %p\n", &number);

  return 0;
}

#include <stdio.h>

// void : return type - return�ϴ� ���� type
//           return value(��)�� ���� ��쿡 void �� �����
// hello : �Լ� �̸�

// �Լ� ���Ǻ� (definition -  define) : return type + �Լ� �̸� + �Ű�������
// void hello() (�Լ��� �� ù ° ��) - �Լ��� �����
// ()     : �Ű������� - �Ű������� �������� �ʴ� ��쿡�� �������
// { } - �Լ��� body(���� - ������) : �Լ��� �ϴ� ���� ������� �κ�

// �Լ��� ������ ��ġ�� �� �Լ��� ȣ���� ������ ���α׷��� �帧��  ���ư�
// �Լ��� ȣ���� �ؾ� ���� ��
// �Լ��� ȣ��(����)�ϴ� ��� :
// �Լ��̸�(�Ű������� ������ ���� �־���);
void hello(){  // parameter - �Ű�����
  printf("hello, programming !!!\n");
  printf("hello, ������ !!!\n");

  // �������� -  local variable
  int number = 11;
  printf("number in hello() : %d\n", number);

  return;
}



int main(){
  printf("���α׷� ����!!!\n");

  hello();  // argument - ����, ���㰪, �μ�
  printf("----------------------------------\n");

  // printf("number in main() : %d\n", number);


  printf("���α׷� ����!!!\n");
  return 0;
}

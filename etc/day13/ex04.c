#include <stdio.h>

int main(){
  // char type�� �迭(������)�� ���ڿ� �����ϱ�

  char str1[10] = "tjoeun";
  char *str2 = "academy";

  printf("str1 : %s\n", str1);
  printf("str2 : %s\n", str2);

  printf("----------------------------\n");


  int number;
  number = 111;  // ���� ���� �����

  int *nums;
  nums = &number;  // number ������ �ּڰ��� �����


  char str3[10];  // ũ�Ⱑ 10�� char type  �� �迭 ����
                          // str3  �������� �迭�� �ּڰ��� �����

  printf("���ڿ��� �Է��ϼ��� : ");

  // scanf() �Լ����� �迭�������� & �� ������ ����
  scanf("%s", str3);

  printf("str3 : %s\n", str3);
  printf("----------------------------\n");

  int figure;

  printf("������ �Է��ϼ��� : ");
  scanf("%d", &figure);

  printf("figure : %d\n", figure);
  printf("----------------------------\n");



  return 0;
}

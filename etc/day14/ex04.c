#include <stdio.h>
#include <stdlib.h>

/*
  atoi() : ACSII string to int
  stdlib.h �� ���ǵǾ� ����

   ���ڿ��� ���������� ���ڷ� �ٲ� ���,
   �ش� ���ڸ� ��ȯ��
   �ٲ��� ���� ��� --> 0 �� ��ȯ��

   astoi(���ڿ��� �ּڰ�: char type�� ������)
*/

int main(){

  char *s1 = "654";
  int number;

  number = atoi(s1);

  printf("number : %d\n", number);
  printf("--------------------------------\n");


  // 16������ �� ���ڿ��� ������ �ٲٱ�
  char *s2 = "0xaf10";
  int number2;

  // strtoi()  : string to long
  //  ���ڿ��� ���������� ���ڷ� �ٲ� ���,
  //  �ش� ���ڸ� ��ȯ��
  //  �ٲ��� ���� ��� --> 0 �� ��ȯ��
  // 16 : 16 �������� ǥ��� ���ڿ��� ������ ��ȯ��
  number2 = strtol(s2, NULL, 16);

  printf("16���� : %x, 10���� : %d\n", number2, number2);
  printf("--------------------------------\n");


  char *s3  = "0xad10 42 0x27C 9952";

  int num1;
  int num2;
  int num3;
  int num4;

  char *end; // <-- ���� ������ �� �κ��� �����ϱ� ���� ������

  num1 = strtol(s3, &end, 16);
  num2 = strtol(end, &end, 10);
  num3 = strtol(end, &end, 16);
  num4 = strtol(end, NULL, 10);

  printf("num1 : %x\n", num1);
  printf("num2 : %d\n", num2);
  printf("num3 : %x\n", num3);
  printf("num4 : %d\n", num4);
  printf("--------------------------------\n");


  // atof : ASCII string to float
  // ���� : �Ǽ��� ��ȯ, ���� : 0�� ���c

  char *s4 = "23.568984";
  float fNumber;

  fNumber = atof(s4);

  printf("fNumber : %f\n", fNumber);
  printf("--------------------------------\n");

   char *s5 = "3.e5";
   float fNumber2;

   fNumber2 = atof(s5);

   printf("������ǥ�� : %e, �Ǽ�ǥ�� : %f\n", fNumber2, fNumber2);


  return 0;
}

#include <stdio.h>

int main(){

  // int type ���� number �� �����ϰ�
  // �� �ڸ����� �Ҵ� �� ��
  // �� �ڸ����� ���� ����ϴ�
  // ���α׷��� �ۼ��ϼ���
  //  number �� 12345 �� �Ҵ��� ��쿡��
  //  (1 + 2 + 3 + 4 + 5) -> 15  �� �����

  // 12345
  // �������� % 10 ������ �ϸ�
  // 1�� �ڸ����� ����

    int number = 12345;
    int mod = 0;
    int div = 0 ;
    int sum = 0;

    // number : 12345
    mod = number % 10;  // 5
    sum = sum + mod;   // 5

    number = number / 10;  // number : 1234
    mod = number % 10;  // 4
    sum = sum + mod;   // 9

    number = number / 10;  // number : 123
    mod = number % 10;  // 3
    sum = sum + mod;   // 12

    number = number / 10;  // number : 12
    mod = number % 10;  // 2
    sum = sum + mod;   // 14

    number = number / 10;  // number : 1
    mod = number % 10;  // 1
    sum = sum + mod;   // 15

    number = number / 10;  // number : 0

    printf("sum : %d\n", sum);


  return 0;
}

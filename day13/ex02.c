#include <stdio.h>

int main(){

  char str1Err = "hello";

  printf("str1Err: %c\n", str1Err); //str1Err:
  printf("str1Err: %s\n", str1Err); //str1Err: (null)

  char ch = 'a';
  char *str1 = "hello";

  //*str1: ������ - "hello" ��� ���ڿ��� ����� �� (�޸�)�� �ּҰ��� ���� (���� �����͸� �����ϴ°��� �ƴϴ�.)
  //"Hello" (���ڿ� ���ͷ� ������) <== �޸� ��򰡿� ����Ǿ� ����

  //charater type pointer�� ���ڿ� ����

  printf("ch: %c\n", ch); //ch: a
  printf("str1: %s\n", str1); //str1: hello

  //�޸� �ּ� ���
  printf("str1�� �ּ�: %p\n", str1); //str1: 0000000000404000


  return 0;
}

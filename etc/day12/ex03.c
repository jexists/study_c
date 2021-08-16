#include <stdio.h>

int main(){

  int arrNum[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // �����ͺ���(numPointer) �� �迭�� ���ڰ��� ����(�Ҵ�)��
  int *numPointer = arrNum;

  // �迭���� arrNum �� �����ϰ� �ִ� �ּҴ�
  // �迭�� data �߿��� ���� ù ��° data�� �����
  // ������ �ּ� (1�� ����� ������ �ּ�)
  // ������ (numPointer) �� �����ϰ� �ִ� �ּҴ�
  // �迭�� data �߿��� ���� ù ��° data�� �����
  // ������ �ּ� (1�� ����� ������ �ּ�)
  // ������ �̸� �տ� * ǥ�� �ϸ�
  // �����Ͱ� �����ϰ� �ִ� �ּ��� �ӿ� �ִ� data���� �˰� ��
  printf("*numPointer : %d\n", *numPointer);  // 1

  printf("*arrNum : %d\n", *arrNum); // 1

  // arrNum[5] : 6
  printf("arrNum[5] : %d\n", arrNum[5]);

  // numPointer[5] : 6
  printf("numPointer[5] : %d\n", numPointer[5]);

  printf("sizeof(arrNum) : %d\n", sizeof(arrNum));
  printf("sizeof(numPointer) : %d\n", sizeof(numPointer));

  // sizeof(arrNum) : 40 byte
  // sizeof(numPointer) : 8 byte


  return 0;
}

#include <stdio.h>
#include <stdlib.h> // malloc(), free() ����� header ����

int main(){

  int size;

  printf("�迭�� ũ�⸦ �Է��ϼ��� : ");
  scanf("%d", &size);

  // (int type ũ�� * �Է¹��� ��) ��ŭ �����޸� �Ҵ�
  int *nPointer = malloc(sizeof(int) *size);

  // �Է¹��� ũ�� ��ŭ �ݺ�
  for(int i = 0; i < size; i++){
    // �ε����� �����ؼ� ���� �Ҵ���
    nPointer[i] = i + 1;
  }
  // �Է¹��� ũ�� ��ŭ �ݺ�
  for(int i = 0; i < size; i++){
        // �ε����� �����ؼ� ���� �����
    printf("nPointer[%d] : %d\n", i, nPointer[i]);

  }

  // free() �Լ��� ȣ���ؼ� �Ҵ��� �޸𸮸� ������
  free(nPointer);

  return 0;
}





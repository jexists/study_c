#include <stdio.h>
#include <stdlib.h>

int main(){

  // ���� ������(int ������ ũ�� * 3)
  int **p = malloc(sizeof(int *) * 3);
                                // ��(��) �� ����

  // ��(ĭ) �� ����  : ��(��)�� ������ŭ �ݺ�
  for(int i = 0; i < 3; i++){
    p[i] = malloc(sizeof(int) * 4);
  }


  p[0][0] = 1;
  p[2][0] = 5;
  p[2][3] = 2;


  printf("p[0][0] : %d\n", p[0][0]);
  printf("p[2][0] : %d\n", p[2][0]);
  printf("p[2][3] : %d\n", p[2][3]);

  //  ��(��)�� ũ�⸸ŭ �ݺ�
  for(int i = 0; i < 3; i++){
     // 2���� �迭��  ��(ĭ) �� ũ�⸸ŭ �޸� ����
    free(p[i]);
  }


   free(p);  // 2 ���� �迭�� ��(��) ���� �޸� ����

  return 0;
}





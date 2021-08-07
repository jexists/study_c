#include <stdio.h>

int main(){

  // int type �� 3�� 4���� ������ �迭
  int arrNums[3][4] = {
                                    {11, 12, 13, 14},
                                    {15, 16, 17, 18},
                                    {19, 20, 21, 22}
                                  };

  int **numsPointer = arrNums;

  printf("arrNums[0][0] : %d\n", arrNums[0][0]);
  printf("arrNums[1][1] : %d\n", arrNums[1][1]);
  printf("arrNums[2][2] : %d\n", arrNums[2][2]);
  printf("---------------------------\n");

  // int type �� ������ 4 ���� ��� �迭
  // ������(����) �� �̷���� �迭
  int num1, num2, num3, num4;
  int *nPointer[4] = {&num1, &num2, &num3, &num4};


  // 2�����迭�� �����͸� �����ϴ� ���
  // �ڷ���(*�����ͺ����̸�)[����ũ��]
  int (*numsPointer2)[4] = arrNums;

  printf("*arrNums   : %p\n", *arrNums);
  printf("*numsPointer2 : %p\n", *numsPointer2);

  printf("numsPointer2[2][1] : %d\n", numsPointer2[2][1]);
  printf("arrNums[2][1] : %d\n", arrNums[2][1]);

  printf("sizeof(arrNums) : %d\n", sizeof(arrNums));
  printf("sizeof(numsPointer2) : %d\n", sizeof(numsPointer2));

  int n[3] = {1, 2, 3};
  printf("*n(�ּ����� ����� ��) : %d\n", *n);  // �ּ����� ����� ��
  printf("n(������ �迭�� �ּڰ�) : %d\n", n);      // ������ �迭�� �ּڰ�


  return 0;
}

#include <stdio.h>

int main(){

  // �� ���� �ֻ����� ������ �� ���� ����  6�� �Ǵ�
  // ��� ����� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

  int count = 0;

  for(int i = 1; i <= 6; i++){
    for(int j = 1; j <= 6; j++){
        if( i + j == 6 ){
            printf("%d + %d = %d\n", i, j, i + j);
            count++;
        }
    }
  }
  printf("---------------------------------\n");
  printf("��� %d �����Դϴ�\n", count);

  return 0;
}

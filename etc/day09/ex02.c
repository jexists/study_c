#include <stdio.h>

int main(){

  // 2x + 4y = 10 �� �Ǵ�
  // ��� x �� y �� ���� ���ϼ���
  // ��, x, y�� �����̰�,
  // 0 <= x <= 10, 0 <= y <= 10 �̴�

  for(int x = 0 ; x <= 10; x++){
    for(int y = 0; y <= 10; y++){
      if(2*x + 4*y == 10){
         printf("x : %d, y : %d\n", x, y);
      }
    }

  }

  return 0;
}






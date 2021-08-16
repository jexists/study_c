#include <stdio.h>

int main(){

  // 2x + 4y = 10 이 되는
  // 모든 x 와 y 의 값을 구하세요
  // 단, x, y는 정수이고,
  // 0 <= x <= 10, 0 <= y <= 10 이다

  for(int x = 0 ; x <= 10; x++){
    for(int y = 0; y <= 10; y++){
      if(2*x + 4*y == 10){
         printf("x : %d, y : %d\n", x, y);
      }
    }

  }

  return 0;
}






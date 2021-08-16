#include <stdio.h>

int main(){

  // 두 개의 주사위를 던졌을 때 눈의 합이  6이 되는
  // 모든 경우의 수를 출력하는 프로그램을 작성하시오

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
  printf("모두 %d 가지입니다\n", count);

  return 0;
}

#include <stdio.h>

struct Point{
  int x;
  int y;
};

int main(){

  int number[10] = {0,};

  int value = 10;
  for(int i = 0; i < 10; i++){
    number[i] =  ++value;
    printf("%d\n", number[i]);
  }

  // 구조체 타입의 배열 생성하기
  struct Point p1[3]; // 0, 1, 2

  p1[0].x = 11;
  p1[0].y = 12;
  p1[1].x = 13;
  p1[1].y = 14;
  p1[2].x = 15;
  p1[2].y = 16;

  int value2 = 20;
  for(int i = 0; i < 3; i++){

    p1[i].x = ++value2;
    p1[i].y = ++value2;

    printf("p1[%d].x : %d, p1[%d] : %d\n", i, p1[i].x, i, p1[i].y);
  }

  printf("--------------------------------------\n");

  // 구조체 배열을 선언하면서 동시에 초기화하기

  struct Point p2[3] = {{.x=31, .y=32},{.x=33, .y=34},{.x=35, .y=36}};
  for(int i = 0; i < 3; i++){
    printf("p2[%d].x : %d, p2[%d] : %d\n", i, p2[i].x, i, p2[i].y);
  }
  printf("--------------------------------------\n");

  struct Point p3[3] = {{51, 52},{53, 54},{55, 56}};
  for(int i = 0; i < 3; i++){
    printf("p3[%d].x : %d, p3[%d] : %d\n", i, p3[i].x, i, p3[i].y);
  }
  printf("--------------------------------------\n");

  // 구조체 배열의 모든 멤버들의 값을 0으로 초기화하는 경우

  struct Point p4[3] = {0,};
  for(int i = 0; i < 3; i++){
    printf("p4[%d].x : %d, p4[%d] : %d\n", i, p4[i].x, i, p4[i].y);
  }
  printf("--------------------------------------\n");


  return 0;
}

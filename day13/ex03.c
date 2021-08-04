
#include <stdio.h>

int main(){

  // char type의 포인터로 문자열 선언하기


  char *str1 = "jexist";

  printf("str1[%d]: %c\n",0, str1[0]);
  printf("str1[%d]: %c\n",1, str1[1]);
  printf("str1[%d]: %c\n",2, str1[2]);
  printf("str1[%d]: %c\n",3, str1[3]);
  printf("str1[%d]: %c\n",4, str1[4]);
  printf("str1[%d]: %c\n",5, str1[5]);
  printf("str1[%d]: %c\n",6, str1[6]); //NULL

  printf("--------------------------------------\n");

  // str1[3] = 'r'; //ERROR
  //문자열은 한 번 생성하면 그 값을 바꿀 수 없음
  //값을 바꿈 <-- 새로운 값을 저장(할당)함
  //원본 data가 그대로 유지됨: immutable


  str1 = "exchange"; //전체 변경은 가능하지만 부분은 안 됨

  for(int i=0; i<6; i++) {
    printf("str1[%d]: %c\n",5, str1[i]);
  }

  printf("--------------------------------------\n");


  int nums[5] = {1,2,3,4,5};

  printf("nums[0]: %d\n", nums[0]); //nums[0]: 1
  printf("nums[3]: %d\n", nums[3]); //nums[3]: 4


  printf("--------------------------------------\n");

  for(int i=0; i<5; i++) {
  printf("nums[%d]: %d\n", i, nums[i]);
  }

  printf("--------------------------------------\n");
  nums[3] = 22222;

  for(int i=0; i<5; i++) {
  printf("nums[%d]: %d\n", i, nums[i]);
  }

  printf("--------------------------------------\n");

  //개수 구하는 방법
  for(int i=0; i<(sizeof(nums)/sizeof(int)); i++) {
  printf("nums[%d]: %d\n", i, nums[i]);
  }



  return 0;
}

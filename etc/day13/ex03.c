#include <stdio.h>

int main(){

  // char type의 포인터로 문자열 선언하기
  // char type의 배열(일차원)로 문자열 선언하기


  char *str1 = "tjoeun";

  printf("str1[%d] : %c\n", 0, str1[0] );
  printf("str1[%d] : %c\n", 1, str1[1] );
  printf("str1[%d] : %c\n", 2, str1[2] );
  printf("str1[%d] : %c\n", 3, str1[3] );
  printf("str1[%d] : %c\n", 4, str1[4] );
  printf("str1[%d] : %c\n", 5, str1[5] );
  printf("str1[%d] : %c\n\n", 6, str1[6] ); // NULL

  // e
  // str1[3] = 'r';

   for(int i = 0; i < 6; i++){

    printf("%c ", str1[i] );

   }
  printf("\n-------------------------------------\n");

  // str1[3] = 'r'; // 오류 발생
  // 문자열은 한 번 생성하면 그 값을 바꿀 수 없음
  // 값을 바꿈 <-- 새로운 값을 저장(할당)함
  // 원본 data 가 그대로 유지됨 :  immutable

   str1 = "academy";

   for(int i = 0; i < 6; i++){

    printf("%c ", str1[i] );

   }
  printf("\n-------------------------------------\n");



  int nums[5] = {1, 2, 3, 4, 5};

  printf("nums[0] : %d\n",nums[0]);  // 1
  printf("nums[3] : %d\n",nums[3]);  // 4
  printf("-------------------------------------\n");

  for(int i = 0; i < (sizeof(nums) / sizeof(int)); i++){

    printf("nums[%d] : %d\n", i , nums[i]);

  }
  printf("-------------------------------------\n");

  nums[3] = 222222;

  for(int i = 0; i < 5; i++){

    printf("nums[%d] : %d\n", i , nums[i]);

  }
  printf("-------------------------------------\n");

  return 0;
}

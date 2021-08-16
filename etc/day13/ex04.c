#include <stdio.h>

int main(){
  // char type의 배열(일차원)로 문자열 선언하기

  char str1[10] = "tjoeun";
  char *str2 = "academy";

  printf("str1 : %s\n", str1);
  printf("str2 : %s\n", str2);

  printf("----------------------------\n");


  int number;
  number = 111;  // 실제 값이 저장됨

  int *nums;
  nums = &number;  // number 변수의 주솟값이 저장됨


  char str3[10];  // 크기가 10인 char type  의 배열 선언
                          // str3  변수에는 배열의 주솟값이 저장됨

  printf("문자열을 입력하세요 : ");

  // scanf() 함수에서 배열변수에는 & 를 붙이지 않음
  scanf("%s", str3);

  printf("str3 : %s\n", str3);
  printf("----------------------------\n");

  int figure;

  printf("정수를 입력하세요 : ");
  scanf("%d", &figure);

  printf("figure : %d\n", figure);
  printf("----------------------------\n");



  return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
  atoi() : ACSII string to int
  stdlib.h 에 정의되어 있음

   문자열을 성공적으로 숫자로 바꾼 경우,
   해당 숫자를 반환함
   바꾸지 못한 경우 --> 0 을 반환함

   astoi(문자열의 주솟값: char type의 포인터)
*/

int main(){

  char *s1 = "654";
  int number;

  number = atoi(s1);

  printf("number : %d\n", number);
  printf("--------------------------------\n");


  // 16진수로 된 문자열을 정수로 바꾸기
  char *s2 = "0xaf10";
  int number2;

  // strtoi()  : string to long
  //  문자열을 성공적으로 숫자로 바꾼 경우,
  //  해당 숫자를 반환함
  //  바꾸지 못한 경우 --> 0 을 반환함
  // 16 : 16 진법으로 표기된 문자열을 정수로 변환함
  number2 = strtol(s2, NULL, 16);

  printf("16진수 : %x, 10진수 : %d\n", number2, number2);
  printf("--------------------------------\n");


  char *s3  = "0xad10 42 0x27C 9952";

  int num1;
  int num2;
  int num3;
  int num4;

  char *end; // <-- 이전 숫자의 끝 부분을 저장하기 위한 포인터

  num1 = strtol(s3, &end, 16);
  num2 = strtol(end, &end, 10);
  num3 = strtol(end, &end, 16);
  num4 = strtol(end, NULL, 10);

  printf("num1 : %x\n", num1);
  printf("num2 : %d\n", num2);
  printf("num3 : %x\n", num3);
  printf("num4 : %d\n", num4);
  printf("--------------------------------\n");


  // atof : ASCII string to float
  // 성공 : 실수를 반환, 실패 : 0을 반홤

  char *s4 = "23.568984";
  float fNumber;

  fNumber = atof(s4);

  printf("fNumber : %f\n", fNumber);
  printf("--------------------------------\n");

   char *s5 = "3.e5";
   float fNumber2;

   fNumber2 = atof(s5);

   printf("지수수표현 : %e, 실수표현 : %f\n", fNumber2, fNumber2);


  return 0;
}

#include <stdio.h>

int main(){

  char str1Err = "hello";

  printf("str1Err: %c\n", str1Err); //str1Err:
  printf("str1Err: %s\n", str1Err); //str1Err: (null)

  char ch = 'a';
  char *str1 = "hello";

  //*str1: 포인터 - "hello" 라는 문자열이 저장된 곳 (메모리)의 주소값을 저장 (실제 데이터를 저장하는것이 아니다.)
  //"Hello" (문자열 리터럴 데이터) <== 메모리 어딘가에 저장되어 있음

  //charater type pointer로 문자열 저장

  printf("ch: %c\n", ch); //ch: a
  printf("str1: %s\n", str1); //str1: hello

  //메모리 주소 출력
  printf("str1의 주소: %p\n", str1); //str1: 0000000000404000


  return 0;
}

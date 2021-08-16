#include <stdio.h>

int main(){

  char ch = 'a';

  char *str1 = "hello";

  // *str1 : 포인터 - "hello" 라는 문자열이 저장된 곳(메모리)의 주솟값을 저장함
  //  "Hello"  (문자열 리터럴)<-- 메모리 어딘가에 저장되어 있음

  printf("ch : %c\n", ch);

  printf("str1 : %s\n", str1);
  printf("str1의 주소 : %p\n", str1);

  return 0;
}

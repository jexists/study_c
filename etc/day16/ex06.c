#include <stdio.h>

// 함수의 선언
void hello(); // 함수의 원형 - protocol

int main(){

  hello();
  return 0;
}

// 함수의 정의부
void hello(){ // 함수의 헤더
  printf("hello, world\n");  // 함수의 본체  : { } 부분
}




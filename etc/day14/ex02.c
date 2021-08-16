#include <stdio.h>
#include <string.h>

/*
  문자열 안에 있는 문자 검색하기

  strchr(문자열 , 검색할 문자)

  string.h 안에 정의되어 있음

  문자를 찾은 경우에는
  해당 문자로 시작하는 문자열의
  포인터를 반환함

  찾지 못한 경우에는 NULL 을 반환함

*/
int main(){
  // 크기가 30님 char type 의 배열을 생성하고
  // 문자열을 할당함
  char s1[30] = "A Tjaeun Academy";

  char *pointer1 = strchr(s1, 'a');

  // 검색하는 문자가 없을 때까지 반복
  while (pointer1 != NULL){

    printf("pointer1 : %s\n", pointer1);
    pointer1 =  strchr(pointer1 + 1, 'a');

  }
  printf("----------------------\n");


  // strrchr  : r(right) 문자열 끝에서부터 검색함

  char s2[30] = "A java javascript";

  char *pointer2 = strrchr(s2, 'a');

  printf("pointer2  : %s\n", pointer2);
  printf("----------------------\n");

  // 문자열 안에 있는 문자열을 검색함
  // strstr(문자열, 문자열) 함수

  char s3[30] = "A java javascript";

  char *pointer3 = strstr(s3, "vas");

  printf("pointer3 : %s\n", pointer3);
  printf("----------------------\n");

  char s4[100] = "A java javascript A java javascript A java javascript";

  char *pointer4 = strstr(s4, "vas");

  // 찾는 문자열이 있는 동안에만 반복함
  while (pointer4 != NULL){
    printf("pointer4 : %s\n", pointer4);
    pointer4 = strstr(pointer4 +1, "vas");
  }

  printf("----------------------\n");


  char s7[30] = "Alice in Wonderland";

  char *pointer5 = strchr(s7, 'n');

  while(pointer5 != NULL){

    printf("%s\n", pointer5);

    pointer5 = strchr(pointer5 + 1, 'n');

  }

  return 0;
}





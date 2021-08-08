#include <stdio.h>
#include <stdlib.h>

int main(){

  char *str1 = "hello";
  /*
  printf("문자열을 입력하세요 : ");
  scanf("%s", str1);
  */

  printf("str1 : %s", str1);

  str1 = "CLang";

  printf("\n----------------------------\n");


  char *str2 = malloc(sizeof(char) * 10);
  char *str2_1 = malloc(sizeof(char) * 10);
  char *str2_2 = malloc(sizeof(char) * 10);

  printf("문자열을 세 개 입력하세요 : ");
  scanf("%s %s %s", str2, str2_1, str2_2);

  printf("%s\n", str2);
  printf("%s\n", str2_1);
  printf("%s\n", str2_2);

  free(str2);
  free(str2_1);
  free(str2_2);

  printf("\n----------------------------\n");

  printf("-- 문자열 여러 개 입력 받기 --\n");

  char str3[10];
  char str4[10];

  printf("문자열 두 개를 입력하세요 : ");
  scanf("%s %s", str3, str4);

  printf("str3 : %s\n", str3);
  printf("str4 : %s\n", str4);

  printf("\n----------------------------\n");

  printf("-- 문자열 여러 개 입력 받기 --\n");

  char str5[10], str6[10],  str7[10], str8[10], str9[10];

  printf("문자열을 세 개 입력하세요 : ");
  scanf("%s %s %s", str5, str6, str7);

  printf("%s\n", str5);
  printf("%s\n", str6);
  printf("%s\n", str7);
  printf("\n----------------------------\n");


  printf("문자열을 다섯 개 입력하세요 : ");
  scanf("%s %s %s %s %s", str5, str6, str7, str8, str9);

  printf("%s\n", str5);
  printf("%s\n", str6);
  printf("%s\n", str7);
  printf("%s\n", str8);
  printf("%s\n", str9);
  printf("\n----------------------------\n");




  return 0;
}

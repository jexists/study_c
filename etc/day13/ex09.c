#include <stdio.h>
#include <string.h> // strlen() �Լ��� ���ǵǾ� �ִ� ��� ����

int main(){
  // ���ڿ��� ���� ���ϱ�

  char *str1 = "Hello";
  char str2[10] = "goodbye";

  printf("%d\n", strlen(str1));
  printf("%d\n", strlen(str2));

  printf("----------------------------------\n");


  printf("�� ���ڿ��� ������ ���ϱ�\n");

  // strcmp(���ڿ�1, ���ڿ�2)
  // �� ���ڿ��� ���̰� ������ 0�� ��ȯ��
  // ���ڿ�1�� ���ڿ�2���� ũ�� 1�� ��ȯ��
  // ���ڿ�1�� ���ڿ�2���� ������ -1�� ��ȯ��
  // str1 : Hello  /  str2 : goodbye
  int result = strcmp(str1, str2);
  printf("result : %d\n", result);
  printf("----------------------------------\n");

   printf("%d\n", strcmp("aaa", "aaa"));
   printf("%d\n", strcmp("aab", "aaa"));
   printf("%d\n", strcmp("aaa", "aaA"));
   printf("%d\n", strcmp("aAa", "aaA"));

  return 0;
}
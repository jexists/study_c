
#include <stdio.h>

int main(){

  // char type�� �����ͷ� ���ڿ� �����ϱ�


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
  //���ڿ��� �� �� �����ϸ� �� ���� �ٲ� �� ����
  //���� �ٲ� <-- ���ο� ���� ����(�Ҵ�)��
  //���� data�� �״�� ������: immutable


  str1 = "exchange"; //��ü ������ ���������� �κ��� �� ��

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

  //���� ���ϴ� ���
  for(int i=0; i<(sizeof(nums)/sizeof(int)); i++) {
  printf("nums[%d]: %d\n", i, nums[i]);
  }



  return 0;
}

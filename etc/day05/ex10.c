#include <stdio.h>

/*
  switch(����(����)){
    case ��1:  if(����)
      ���๮...
      break;
   case ��2:   else if(����)
      ���๮...
      break;
   case ��3:   else if(����)
      ���๮...
      break;
   default:    else
      ���๮...
      break;
  }
*/

int main(){

  int num1;

  printf("������ �Է��ϼ��� : ");
  scanf("%d", &num1);

  switch(num1){
    case 1:
      printf("�Է��Ͻ� ���ڴ� 1�Դϴ�\n");
      break;
    case 2:
      printf("�Է��Ͻ� ���ڴ� 2�Դϴ�\n");
      if(1){
        break;
      }
    case 3:
      printf("�Է��Ͻ� ���ڴ� 3�Դϴ�\n");
      break;
    default:
      printf("�Է��Ͻ� ���ڴ� 1, 2, 3 �߿� �����ϴ�\n");
      break;
  }

  printf("���α׷� ����\n");

  return 0;
}




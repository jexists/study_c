#include <stdio.h>

int main(){

  int decimal = 13;
  int binary[20] = {0,};

  int idx = 0;

  while(1){
    binary[idx] = decimal % 2;
    decimal = decimal / 2;

    idx++;

    if(decimal == 0){
         break;
    }
  }

  // �迭�� ��Ҹ� �������� ����ϱ�
  for(int i = idx - 1; i >= 0; i--){
    printf("%d ", binary[i]);
  }
  printf("\n");


  return 0;
}

#include <stdio.h>

int main(){

  int scores[7] = {79, 88, 91, 33, 100, 55, 95};

  //  �ְ� ����, ���� ����
  int max, min;

  // scores �迭���� ��Ҹ� �ϳ��ϳ��� ���ʴ�� �̾Ƽ�
  // max ������ �Ҵ�� ������ �� ����� ���� �� ũ��
  // �ش� ��Ҹ� max�� �Ҵ���

  // scores �迭���� ��Ҹ� �ϳ��ϳ��� ���ʴ�� �̾Ƽ�
  // max ������ �Ҵ�� ������ �� ����� ���� �� ������
  // �ش� ��Ҹ� min�� �Ҵ���

  for(int i = 0 ; i < sizeof(scores) / sizeof(int); i++){

       if(i == 0) {  // 1ȸ�� �ݺ�

          max = min = scores[i];

       }else{

          if(scores[i] > max){
            max = scores[i];
          }else if(scores[i] < min){
            min = scores[i];
          }

       }  // outer if

  } // for

  printf("�ְ��� : %d��\n", max);
  printf("�������� : %d��\n", min);


  return 0;
}

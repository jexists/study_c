#include <stdio.h>

int main(){

  // number �� ����� ���ڰ�
  // �Ųٷ� �о ������ �д� �Ͱ� ���� ��������
  // �˾ƺ���     �� ȸ��(palindrome)

    int number = 12321;

    printf("ȸ������ �˻��� ���ڸ� �Է��� ������ : ");
    scanf("%d", &number);

    int temp = number;
    int reverseNum  = 0;

    while(temp != 0){
        reverseNum = reverseNum * 10 +  temp % 10;
        temp = temp / 10;
    }

    printf("number(%d) - reverseNum(%d)\n", number, reverseNum);

    if(number == reverseNum){
        printf("%d �� ȸ�����Դϴ�\n", number);
    }else{
        printf("%d �� ȸ������ �ƴմϴ�\n", number);
    }

    return 0;
}





#include <stdio.h>

int main(){

  // number �� ����� ���ڰ�
  // �Ųٷ� �о ������ �д� �Ͱ� ���� ��������
  // �˾ƺ���     �� ȸ��(palindrome)

    int number = 12321;
    int temp = number;
    int reverseNum  = 0;

                           //   0  *  10           12321 % 10
    reverseNum = reverseNum * 10 +  temp % 10;   // :  1
    temp = temp / 10;    // 1232

                         //     1 * 10                 1232 % 10 (2)
    reverseNum = reverseNum * 10 +  temp % 10;  //  :  12
    temp = temp / 10;  // 1232 / 10 <-- 123

                          //         12 * 10           123 % 10 (3)
    reverseNum = reverseNum * 10 +  temp % 10;  // :  123
    temp = temp / 10;   // 12

                        //      123 * 10            12 % 10 (2)
    reverseNum = reverseNum * 10 +  temp % 10;   // :   1232
    temp = temp / 10;   // 1

                         //        1232 * 10           1 % 10 (1)
    reverseNum = reverseNum * 10 +  temp % 10;   // :   12321
    temp = temp / 10;  // 0


    printf("number(%d) - reverseNum(%d)\n", number, reverseNum);

    if(number == reverseNum){
        printf("%d �� ȸ�����Դϴ�\n", number);
    }else{
        printf("%d �� ȸ������ �ƴմϴ�\n", number);
    }

    return 0;
}





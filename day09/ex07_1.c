#include <stdio.h>

int main() {
    //ȸ��: palindrome (�Ųٷ� �о ������ �о ���� ����)

    int number = 12321;
    int temp = number;
    int reverseNum = 0;


    printf("���ڸ� �Է����ּ��� \n");
    scanf("%d", &number);

    while(temp != 0) {
        reverseNum = reverseNum * 10 + temp % 10;
        temp = temp /10;
    }

    if (number == reverseNum) {
        printf("%d �� ȸ���� �Դϴ�.\n", number);
    } else {
        printf("%d �� ȸ������ �ƴմϴ�.\n", number);
    }
    return 0;
}


#include <stdio.h>

int main() {
    /*
    234 �Է� = 200
    456 �Է� = 400
    578 �Է� = 500
    ����ϴ� ���α׷� �ۼ�

    [��Ʈ] int type�� / �����ڿ� % ������ ���
    */

    int number;

    printf("���� �ڸ� ������ �Է��ϼ��� : ");
    scanf("%d", &number);

    /* 1��°
    number = number / 100;
    number = number * 100;
    */

    /* 2��°
    number /= 100;
    number *= 100;
    */


    number = (number / 100) * 100


    printf("number: %d \n : ", number);

    printf("----------------------------------\n");
    return 0;
}

#include <stdio.h>

int main() {
    /*
    333 �Է� = 331
    777 �Է� = 771
    ����ϴ� ���α׷� �ۼ�
    */


    /*
    int number;
    printf("���� �ڸ� ������ �Է��ϼ��� : ");
    scanf("%d", &number);
    number = number - (number / 100 - 1);
    printf("number: %d \n : ", number);
    printf("----------------------------------\n");
    */


    int number;
    printf("���� �ڸ� ������ �Է��ϼ��� : ");
    scanf("%d", &number);
    printf("number: %d \n : ", number / 10 * 10 + 1);



    return 0;
}

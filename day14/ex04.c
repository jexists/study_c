
#include <stdio.h>
#include <stdlib.h>

int main() {


    char *s1 = "654";
    int number1;

    number1 = atoi(s1);
    //atoi: ACSII string to int
    //stdlib.h�� ���ǵǾ� ����
    //���ڿ��� ���������� ���ڷ� �ٲ� ��� �ش� ���ڸ� ��ȯ
    //�ٲ��� ���� ��� => 0�� ��ȯ
    //astoi(���ڿ� �ּҰ�: char type�� ������)


    number1 =  atoi(s1);

    printf("number1: %d\n", number1);


    printf("-----------------\n");

    //16������ �� ���ڿ��� ������ �ٲٱ�
    char *s2 = "0xaf10";
    int number2;

    //strtol :  strting to long
    //stdlib.h�� ���ǵǾ� ����
    //���ڿ��� ���������� ���ڷ� �ٲ� ��� �ش� ���ڸ� ��ȯ
    //�ٲ��� ���� ��� => 0�� ��ȯ
    //16 : 16�������� ǥ��� ���ڿ��� ������ ��ȯ
    number2 = strtol(s2, NULL, 16);

    printf("number2: 16���� : %x, 10����: %d\n", number2, number2);



    printf("-----------------\n");

    char *s3 = "0xad10 42 0x27c 9952";


    char *end; // ���� ������ �� �κ��� �����ϱ� ���� ������

    int num1 = strtol(s3, &end, 16);
    int num2 = strtol(end, &end, 10);
    int num3 = strtol(end, &end, 16);
    int num4 = strtol(end, NULL, 10);


    printf("num1: %x\n", num1);
    printf("num2: %d\n", num2);
    printf("num3: %x\n", num3);
    printf("num4: %d\n", num4);


    printf("-----------------\n");

    //atof: ASCII string to float
    //����: �Ǽ��� ��ȯ, ����: 0�� ��ȯ

    char *s4 = "23.568984";
    float fNumber;

    fNumber = atof(s4);

    printf("fNumber: %f\n", fNumber);


    printf("-----------------\n");

    char *s5 = "3.e5";
    float fNumber2;

    fNumber2 = atof(s5);
    printf("������ǥ��: %e, �Ǽ�ǥ��: %f\n", fNumber2, fNumber2);

    return 0;
}

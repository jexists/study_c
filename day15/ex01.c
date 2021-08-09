#include <stdio.h>
#include <stdlib.h>

int main() {
    //�Ǽ��� ���ڿ��� ��ȯ

    //��ȯ�� ���ڸ� �����ϴ� �迭

    char s1[10];
    float num1 = 38.972340F;

    //%f�� �����ؼ� �Ǽ��� ���ڿ��� ����

    sprintf(s1, "%f", num1);

    printf("s1: %s\n", s1);


    printf("----------------------\n");

    sprintf(s1, "%e", num1);

    printf("s1: %s\n", s1);


    printf("----------------------\n");

    //���ڿ��� 10�� ������ ��ȯ
    char *s2 = "20972";
    int num2;

    num2 = atoi(s2);

    printf("num2: %d\n", num2);



    printf("----------------------\n");

    char *s3 = "0x1faceface";

    int num3;
    //16������ ǥ��� ���ڿ��� ������ ��ȯ�ϴ� ���,
    //strtol()�Լ� ���
    //NULL:���� ���ڿ� �ȿ� ����ִ� ���ڰ� �ϳ��̹Ƿ�
        //�ι�°argument (��������)�δ� Null�� ����

    //16 ���� ǥ��

    strtol(s3, NULL, 16);
    printf("num3: x0%x\n", num3);




    printf("----------------------\n");
    //���ڿ� => �Ǽ�
    //atof(16���� ����� ���ڿ��� ����Ű�� �ִ� ������) �Լ� ���

    char *s4 = "97.527824";
    float num4;

    num4 = atof(s4);
    printf("num4: %f\n", num4);

    double num5 = atof("78.5654");

    printf("num5: %f\n", num5);

    printf("----------------------\n");

    //�ΰ��� �Ǽ��� �� ���ڿ��� �Ǽ��� ��ȯ

    char *s5 = "29.977213 4528.112305";
    float number1;
    float number2;
    char *end;

    //strtof()�Լ� ���
    //strtof(s5,&end): ù��° �Ǽ��� ��ȯ�ϰ� �� �����͸� ����
    //strtof(end, NULL) �տ��� ���� �����͸� ����ؼ� �ι�° �Ǽ��� ��ȯ

    number1 = strtof(s5, &end);
    number2 = strtof(end, NULL);

    printf("number1: %f\n", number1);
    printf("number2: %f\n", number2);

    printf("----------------------\n");

    //char �迭�� �Ǽ������ ���ڿ���
    //���� ����� ���ڿ��� �Բ� ������ ��
    // �迭�ӿ� ����� ���ڿ� ���

    //�Ǽ� ����� ���ڿ���
    //�������(16����)�� ���ڿ��� �Բ� �����ϴ� �迭 ����

    char s6[30];
    float fNumber = 98.415237F;
    int iNumber = 0x3fe1920;

    sprintf(s6, "%f, 0x%x", fNumber, iNumber);

    printf("s6: %s\n", s6);

    return 0;
}

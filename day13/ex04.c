

#include <stdio.h>

int main(){

    // char type�� �迭(������)�� ���ڿ� �����ϱ�

    char str1[10] = "jexist";

    char *str2 = "exchanged";

    printf("str1: %s\n", str1); //�迭
    printf("str2: %s\n", str2); //������

    printf("--------------------------------------\n");


    int number;
    number = 111; // ���� ���� ����

    int *nums;
    nums = &number; //������: number ������ �ּҰ� ����


    char str3[10]; //ũ�Ⱑ 10�� char type�� �迭 ����
    //str3 �������� �迭�� �ּҰ��� �����
    //�迭�� �����ʹ� ������ ��� (except ������)

    printf("���ڿ��� �Է��ϼ��� :");
    scanf("%s", str3); //�迭���� �ּ�ǥ�� ������ �ʿ���� (�迭��ü�� �ּұ⶧����)

    printf("str3 : %s\n", str3);

    printf("--------------------------------------\n");

    int figure;

    printf("������ �Է��ϼ��� :");
    scanf("%d", &figure); //�ּ�ǥ�� ������ �ʿ�(&)

    printf("figure : %d\n", figure);

    printf("--------------------------------------\n");


    return 0;
}

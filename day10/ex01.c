#include <stdio.h>

int main() {

    int *numberPointer; //�ּҸ� �����ϴ� ���� Ȯ�� (�ּҸ� ���԰���)
    int number = 11; //�����͸� ������ ���� Ȯ��

    //number��� �̸�ǥ(����)�� ���� (�޸� ������ �ּҸ�
    //numberPointer�� ����
    numberPointer = &number;

    printf("number�� �ּҰ�: %u\n", numberPointer); //number�� �ּҰ�: 6422036

    printf("22�ϱ� ��\n");
    printf("number: %d\n", number); //number: 11


    //numberPointer �����ϰ� �ִ� �ּ����� ���� �� ������ 22�� ������ (������)
    *numberPointer = 22; //(�տ� ����Ÿ���� ���� ��� => �� ���԰���)
    //number = 22; (������ ���� ��� ����)

	printf("22�ϱ� ��\n");
	//number��� ������ ���� ������ ���� �����
    printf("number: %d\n", number); // number: 22

	//numberPointer�� �����ϰ� �ִ� �ּ����� ���� �� ������ �ִ� �� ���
	printf("number: %d\n", *numberPointer); // number: 22

    return 0;
}

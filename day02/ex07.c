#include <stdio.h>

#define SIZE 9
//��ȣȭ ���

int main() {

    //%u: unsigned(decimal) integer
    //��ȣ���� ������ ����
    char name[SIZE] = "�� �� ��";
	//���ڿ��Ҷ� ū����ǥ ���
    printf("name: %s\n", name);
    printf("&name[0]: %s\n", &name[0]);
    printf("\t �ּ�\n\t name == &name[0] \n");
    printf("name: %u\t", name);

    printf("&name[0]: %u\n", &name[0]);

/*
char name[9] -> ũ�Ⱑ 9���� �迭 ����
name: �迭�� �̸�(�迭��) ==  �迭�� ���� �ּ� == &name[0]
9: �迭�� ũ�� == �迭 ����� ����
name[0]~name[8]�� ������ �������� �̾��� ����

%s: ����� ��� ���� ���  => ���ڿ�
-> ������ ��('\0': null ����)������ ��� ���� ���
%u: �迭�� �ּ� ��� (��ȣ���� ������)
*/
    return 0;
}



#include <stdio.h>

int main() {

    int gender; // ����: ����-1, ����-1
    int age; //����
    int isStudent; //�л��̸�-1, �ƴϸ�-0

    printf("����, ����, �л� ���θ� �Է��ϼ��� :");
    scanf("%d %d %d", &gender, &age, &isStudent);

    printf("�ȳ��ϼ���\n");
    printf("���� ���ϴ�\n");

    if(gender == 2) { //�����ΰ��
        printf("���� �ݽ��ϴ�.\n");
        return 0;
    }

    if(age < 30) { //30�� �̸��� ���
        printf("���� �ݽ��ϴ�.\n");
        return 0;
    }

    if(isStudent == 0) { //g�л��� �ƴ� ���
        printf("���� �ݽ��ϴ�.\n");
        return 0;
    }

    printf("���α׷� ����\n");
    return 0;
}
